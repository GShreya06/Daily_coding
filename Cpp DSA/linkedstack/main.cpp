#include <iostream>
using namespace std;
class node{
    int info;
    node* next;
    node(int x,node* n=NULL){
        info=x;
        next=n;
    }
};
class Stacktype{
    node* top;
public:
    Stacktype(){
        top=NULL;
    }
    void push(node*);
    int pop();
    int isempty();
    void display();
    void clear();
    node* createnewnode(int);
};
int Stacktype :: isempty(){
    if(top==NULL)
        return 1;
    else
        return -1;
}
void Stacktype ::clear(){
    if(top==NULL){
        cout<<"\nStack is empty";
    }
    else{
        int p*=top;
        top=top->next;
        for(p=top;p!=NULL;p=top){
        delete p;
        top=top->next;
        }
    }
}
int Stacktype ::pop(){
    int d;
    int p=top;
    top=top->next;
    d=p->info;
    return d;
}
node* Stacktype::createnewnode(int x){
    node* nptr;
    nptr=new node;
    nptr->info=x;
    nptr->next=NULL;
    return nptr;
}
void Stacktype::push(node* nptr){
    if(top==NULL){
        top=nptr;
    }
    else{
        nptr->next=top;
        top=nptr;
    }
}
void Stacktype ::display{
    if{

    }
    else{
        cout<<"\nContents of the Stack Starting from topmost point are:";
        for(ptr=top;ptr!=NULL;ptr=){
            cout<<ptr->info<<"\t";
        }
    }
}
int main()
{
    Stacktype s;
    int e,a,d,choice,node*temp;
    char c='y';
    while(c=='y' !! c=='Y'){
        cout<<"\n Main Menu:";
        cout<<"\n 1.Push:";
        cout<<"\n 2.Pop:";
        cout<<"\n 3.Check if empty:";
        cout<<"\n 4.Clear:";
        cout<<"\n 5.Display:";
        cout<<"\n 6.Count the number of Elements:";
        cout<<"\n 7.Topmost";
        cout<<"\nEnter your choice (1-7)";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter a value";
            cin>>a;
            temp=s.createnewnode(a);
            s.push(temp);
            s.display();
            break;
        case 2:
            e=s.isempty();
            if(e==1){
                cout<<"\n Stack is Empty...Underflow";
            }
            else{
                d=s.pop();
                cout<<d<<" has been deleted";
                s.display();
            }
            break;
        case 3:
            e=s.isempty();
            if(e==1){
                cout<<"\n Stack is empty";
            }
            else{
                cout<<"\n Stack is not empty";
            }
            break;
        case 4:
            s.clear();
        case 5:
            s.display();
        case 6:
        case 7:
            if(top==NULL){
                cout<<"\nStack is empty";
            }
            else{
                cout<<top->info;
            }
            break;
        }
        cout<<"\nDo you want to continue(y/n)?";
        cin>>y;
    }
    return 0;
}
