#include <iostream>
using namespace std;
class node{
    int info;
    node* next;
};

class linkedtype{
    node* start;
    public:linkedtype(){
        start=NULL;
    }
    node* createnewnode(int);
    void createnewlist(node*);
    void addatend(node*);
    void addafter(node*);
    void addbefore(node*);
    void deletion();
    int count();
    void display();
};

node* linkedtype::createnewnode(int i){
    node* newptr;
    newptr=new node();
    newptr->info=i;
    newptr->next=NULL;
    return(newptr);
}
void linkedtype::createnewlist(node* newptr){
    node* temp;
    temp=start;
    start=newptr;
    newptr->next=temp;
}
void linkedtype::addafter(node* nptr){
    int after;
    node* temp;
    cout<<"Enter the info part of the node after which we wish to add";
    cin>>after;
    for(temp=start;temp!=NULL;temp=temp->next){
        if(temp->info==after){
            newptr->next=temp->next;
            temp->next=newptr;
        }
    }
}
void linkedtype::addbefore(node* nptr){
    node* temp;
    int before;

}






