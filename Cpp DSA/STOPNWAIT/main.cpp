#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<direct.h>
using namespace std;
#define inc(k) if(k<max_seq)k++;else k=0;
#define time 5
#define max_seq 1
#define tot_pack 5
int randn(int n) {
    return rand()%n + 1;
}
typedef struct{
    int data;
}
packet;
typedef struct{
    int kind;
    int seq;
    int ack;
    packet info;
}
frame;
typedef enum{
    frame_arrival,error,time_out
}
event_type;
frame data1;
void from_network_layer(packet *);
void to_physical_layer(frame *);
void to_network_layer(packet *);
void from_physical_layer(frame*);
void sender();
void receiver();
void wait_for_event_sender(event_type *);
void wait_for_event_receiver(event_type *);
int i=1;
char turn;
int disc=0;
int main() {
while(!disc){
    sender();
    receiver();
}
getchar();
}
void sender()
{
    static int frame_to_send=0;
    static frame s;
    packet buffer;
    event_type event;
    static int flag=0;
    if (flag==0){
        from_network_layer(&buffer);
        s.info=buffer;
        s.seq=frame_to_send;
        cout<<"\nSender information : " << s.info.data;
        cout<<"\nSequence no. : " << s.seq;
        turn='r';
        to_physical_layer(&s);
        flag=1;
    }
    wait_for_event_sender(&event);
    if(turn=='s'){
     if(event==frame_arrival){
        from_network_layer(&buffer);
        inc(frame_to_send);
        s.info=buffer;
        s.seq=frame_to_send;
        cout<<"\nSender information : " << s.info.data;
        cout<<"\nSequence no. : " << s.seq;
        getch();
        turn='r';
        to_physical_layer(&s);
    }
}
}
void from_network_layer(packet *buffer){
    (*buffer).data=i;
    i++;
}
void to_physical_layer(frame *s){
    data1=*s;
}
void wait_for_event_sender(event_type *e){
    static int timer=0;
    if(turn=='s'){
        timer++;
    return ;
    }
    else{
        timer=0;
        *e=frame_arrival;
    }
}
void receiver(){
    static int frame_expected=0;
    frame s,r;
    event_type event;
    wait_for_event_receiver(&event);
    if(turn=='r'){
        if(event==frame_arrival){
            from_physical_layer(&r);
    if(r.seq==frame_expected){
            to_network_layer(&r.info);
            inc (frame_expected);
    }
    else
        cout<<"\nReceiver : Acknowledgement resent";
        getch();
        turn='s';
        to_physical_layer(&s);
    }
    }
}
void wait_for_event_receiver(event_type *e){
    if(turn=='r'){
        *e=frame_arrival;
    }
}
void from_physical_layer(frame *buffer){
    *buffer=data1;
}
void to_network_layer(packet *buffer){
    cout<<"\nReceiver : packet received -> "<< i-1;
    cout<<"\nAcknowledgement sent";
    getch();
    if(i>tot_pack){
    disc=1;
    cout<<"\nDiscontinue\n";
    }
}
