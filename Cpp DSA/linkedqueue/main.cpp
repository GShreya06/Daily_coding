#include <iostream>
using namespace std;
class node{
public:
    int info;
    node* next;
    node(int x ,node* n = NULL){
        info=x;
        next=n;
    }
};
class queuetype{
    node *f ,*r;
public:
    queuetype(){
        f=r=NULL;
    }
    int isempty();
    void enqueue(int x);
    int dequeue();
    void display();
};
void queuetype ::enqueue(int x){
    node *temp;
    temp=new node(x);
    if(f==NULL){
        f=temp;
    }
    else{
        r->next=temp;
        r=temp;
    }
}
int queuetype::dequeue(){
    int x,d,front;
    x=front->info;
    if(f==d){
        delete f;
        f=r=NULL;
    }
    else{
        node* temp;
        temp=f;
        f=f->next;
        delete temp;
    }
    return x;
}
void queuetype::display(){
    if(f==NULL){
        cout<<"Queue is empty";
    }
    else{
        cout<<"\nDisplaying the queue contents:";
        node* temp;
        for(temp=f;temp!=NULL;temp=temp->next){
            cout<<temp->info<<"\t";
        }
    }
}
int queuetype::isempty(){
    int f;
    if(f==NULL){
        return 1;
    }
    else{
        return -1;
    }
}

int main()
{
    queuetype q;
    char c='y';
    int choice,n,in;
    node* nptr;
    while((c=='y')|| (c=='Y'))
    {
        cout<<"\nMain menu:";
        cout<<"\nAdding in the Queue:";
        cout<<"\nDeleting in the Queue:";
        cout<<"\nTo check Emptyness :";
        cout<<"\nDisplay:";
        cin>>choice;
        switch(choice){
            case 1:
          cout << "Enter the info part of the node to be added: ";
          cin >> in;
          nptr = q.enqueue (in);
          q.display ();
          break;
        case 2:
          q.dequeue();
          q.display ();
          break;
        case 3:
            int e=isempty();
            if(e==1){
                cout<<"\nQueue is empty";
            }
            else{
                cout<<"\nQueue is not empty";
            }
            break;
        case 4:
          q.display ();
          break;
        default:
          cout << "Error in input" << endl;
    }
          cout << "Do you want to continue ? ";
          cin >> c;
    }
  return 0;
}
