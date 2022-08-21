#include<iostream>
using namespace std;

const int Max=6;

template<class T>
class Queuetype{
	int f,r,q[Max];

	public:
	Queuetype(){
		f=r = -1;
	}
	T isEmpty(){
		if(f==-1){
            return 1;
		}
		else{
            return -1;
		}
	}

	T isfull(){
		if(r==Max -1){
			return 1;
		}
		else{
            return -1;
		}
	}
	void addition(int in){
			if(f==-1){
               f=r=0;
            }
            else{
                r++;
                q[r]=in;
            }
	}
	T deletion(){
	    int del;
		if(f == r){
            del=q[f];
            f=r=-1;
		}
		else{
            del=q[r];
            f++;
		}
		return del;
	}
	void display(){
	    if(f==-1){
            cout<<"\nQueue is empty!";
	    }
	    else{
            cout<<"\nContents of Queue:";
            for(int i=f;i<=r;i++){
                cout<<q[i]<<" ";
            }
	    }
	}
};
int main(){
    Queuetype<int>queue;
    int choice,f,e,a,d;
    char ch='y';
    while(ch=='y' && ch=='Y'){
        cout<<"\nMain Menu";
        cout<<"\n 1. TO ADDITION";
        cout<<"\n 2. TO DELETION ";
        cout<<"\n 3. TO CHECK IFEMPTY";
        cout<<"\n 4. TO CHECK IFFULL";
        cout<<"\n 5. TO DISPLAY";
        cout<<"\n Enter your choice [1-5]";
        cin>>choice;
        switch(choice){
        case 1:
            f=queue.isfull();
            if(f==1){
                cout<<"\n Overflow!";
                break;
            }
            else{
                    cout<<"\n Enter an integer:";
                    cin>>a;
                    queue.addition(a);
                    queue.display();
                }
            break;
        case 2:
            e=queue.isEmpty();
            if(e==1){
                cout<<"\n Underflow! Queue is empty!";
                break;
            }
            else{
                d=queue.deletion();
                cout<<d<<"has been deleted"<<endl;
                queue.display();
            }
            break;
        case 3:
            e=queue.isEmpty();
            if(e==1){
                cout<<"\nQueue is empty!";
            }
            else{
                cout<<"\nQueue is not empty";
            }
            break;
        case 4:
            f=queue.isfull();
            if(f==1){
                cout<<"\nQueue is full!";
            }
            else{
                cout<<"\nQueue is not empty";
            }
            break;
        case 5:
            queue.display();
            break;
        default:
            cout<<"You have entered wrong number!";
        }
        cout<<"\nDo you want to continue ?";
        cin>>ch;
    }
    return 0;
}



