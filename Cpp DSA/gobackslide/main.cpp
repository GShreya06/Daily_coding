#include<stdio.h>
#include<conio.h>
int main(){
    char sender[50],receiver[50];
    int i,winsize;
    printf("\n Enter the window size : ");
    scanf("%d",&winsize);
    printf("\n Sender window is expanded to store message or window \n");
    printf("\n Enter the data to be sent : ");
    fflush(stdin);
    gets(sender);
    for(i=0;i<winsize;i++){
        receiver[i]=sender[i];
        receiver[i]=NULL;
    }
    printf("\n Message sent by the sender : ");
    puts(sender);
    printf("\n Window size of receiver is expanded\n");
    printf("\n ACKNOWLEDGEMENT FROM RECEIVER \n");
    for(i=0;i<winsize;i++);
    printf("\n ACK:%d",i,"\n");
    printf("\n Message received by receiver is : ");
    puts(receiver);
    printf("\n WINDOW SIZE OF RECEIVER IS SHRINKED \n");
    getch();
return 0;
}
