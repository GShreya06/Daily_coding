#include <iostream>
using namespace std;
const int SIZE =5;
template <class T>
class Circular_queue{
public:
    T cq[SIZE];
    int f,r;
    Circular_queue(){
        f=r=0;
    }
    void insert(T);
    T remove();
    int isempty();
    int isfull();
    void display();
    void clear();
    T frontmost();
    T rearmost();
    int count();
};
template <class T>
void Circular_queue<T>:: insert(T i)
{
    if(r==-1){
        f=r=0;
        cq[r]=i;
    }
    else if(r==SIZE-1){
        r=0;
        cq[r]=i;
    }
    else{
        r++;
        cq[r]=i;
    }
}
template<class T>
T Circular_queue<T>::remove()
{
    T rem;
    if(f==r){
        rem=cq[f];
        f=r=-1;
    }
    else if(f==SIZE-1){
        rem=cq[f];
        f=0;
    }
    else{
        rem=cq[f];
        f++;
    }
    return rem;
}
template<class T>
int Circular_queue<T>::isempty()
{
    if(f==-1)
        return 1;
    else
        return -1;
}
template<class T>
int Circular_queue<T>::isfull()
{
    if(f==0&&r==SIZE-1)
        return 1;
    else if(f==r+1)
        return 1;
    else
        return 0;
}
template <class T>
void Circular_queue <T>::clear()
{
    f=r=-1;
}
template <class T>
T Circular_queue <T>::frontmost()
{
    T res;
    res=cq[f];
    return res;
}
template <class T>
T Circular_queue <T>::rearmost()
{
    T res;
    res=cq[r];
    return res;
}
template <class T>
void Circular_queue <T>::display()
{
    if(f==-1)
        cout<<"Queue is empty"<<endl;
    else if(f<=r){
        cout<<"\nContents of circular queue are:";
        for(int j=0;j<f;j++)
            cout<<"_"<<"\t";
        for(int j=f;j<=r;j++)
            cout<<cq[j]<<"\t";
        for(int j=r+1;j<SIZE;j++)
            cout<<"_"<<"\t";
    }
    else{
        for(int j=0;j<=r;j++)
            cout<<cq[j]<<"\t";
        for(int j=r+1;j<f;j++)
            cout<<"_"<<"\t";
        for(int j=f;j<SIZE;j++)
            cout<<cq[j]<<"\t";
    }
    cout<<endl;
}
template <class T>
int Circular_queue <T>::count()
{
    int cnt=0;
    if(f==-1)
        return 0;
    else if(f<=r){
        for(int j=f;j<=r;j++)
            cnt++;
        return cnt;
    }
    else if(f>r){
        for(int j=0;j<=r;j++)
            cnt++;
        for(int j=f;j<SIZE;j++)
            cnt++;
        return cnt;
    }
    cout<<endl;
}
int main()
{
    Circular_queue<int> cqueue;
    char c='y';
    int choice, i, rem,empty, full,count,f,r;
    while(c=='y' || c=='Y')
    {
    cout<<"Main Menu"<<endl;
    cout<<"1.To Insert a new element"<<endl;
    cout<<"2.To Remove an element"<<endl;
    cout<<"3.To Check if the Queue is Empty"<<endl;
    cout<<"4.To Check if the Queue is Full"<<endl;
    cout<<"5.Display the contents of the Queue"<<endl;
    cout<<"6.Display the Front most Element of the Queue:"<<endl;
    cout<<"7.Display the Rare most Element of the Queue:"<<endl;
    cout<<"8.Display the No. of element in the queue:"<<endl;
    cout<<"9.Clear the Queue"<<endl;
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        full=cqueue.isfull();
        if(full==1)
        cout<<"Queue is full. Insertion not possible"<<endl;
        else{
            cout<<"Enter the element to be inserted:";
            cin>>i;
            cqueue.insert(i);
            cqueue.display();
        }
        break;
        case 2:
            empty=cqueue.isempty();
            if(empty==1)
                cout<<"\nQueue is empty. Deletion not possible"<<endl;
            else{
                rem=cqueue.remove();
                cout<<rem<<" has been Deleted"<<endl;
                cqueue.display();
                }
            break;
        case 3:
            empty=cqueue.isempty();
            if(empty==1)
                cout<<"Queue is empty"<<endl;
            else
                cout<<"Queue is not empty"<<endl;
            break;
        case 4:
            full=cqueue.isfull();
            if(full == 1)
                cout<<"Queue is full."<<endl;
            else
                cout<<"Queue is not full."<<endl;
            break;
        case 5:
            cqueue.display();
            break;
        case 6:
            empty=cqueue.isempty();
            if(empty!=1){
                f=cqueue.frontmost();
                cout<<"Frontmost Element in the Queue: "<<f<<endl;
            }
            else
                cout<<"\n Cqueue is empty";
            break;
        case 7:
            empty=cqueue.isempty();
            if(empty=1){
                r=cqueue.rearmost();
                cout<<"Rearmost Element in the Queue: "<<r<<endl;
            }
            else
                cout<<"\n Cqueue is empty";
            break;
        case 8:
            count=cqueue.count();
            cout<<"No. of Elements in the List: "<<count<<endl;
            break;
        case 9:
            cqueue.clear();
            break;
        default:
            cout<<"Error in input."<<endl;
        }
        cout<<"Do u want to continue(y/n):";
        cin>>c;
    }
    return 0;
}
