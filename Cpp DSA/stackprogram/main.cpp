#include<iostream>
using namespace std;
const int MaxStackSize=10;
template<class T>
class Stacktype
{
        public:
                Stacktype(int Max);
                T IsEmpty();
                T IsFull();
                void Push(T);
                T Pop();
                void Display();
        private:
            int top; //current top of stack
            T *S; //element array
};
template<class T>
Stacktype<T>::Stacktype(int Max)
{
    Max=MaxStackSize;
    top=-1;
}
template<class T>
void Stacktype<T>::Push(T x)
{
    top++;
    S[top]=x;
}
template<class T>
T Stacktype<T>::Pop()
{
        T x;
        x=S[top];
        top--;
        return x;
}
template<class T>
T Stacktype<T>::IsEmpty()
{
    if (top == -1){
        return 1;
    }
    else{
        return -1;
    }
}
template<class T>
T Stacktype<T>::IsFull()
{
    if (top==MaxStackSize-1){
        return 1;
    }
    else{
        return -1;
    }
}
template<class T>
void Stacktype<T>::Display()
{
        if(IsEmpty())
                cout<<"\n Stack is Empty!"; //delete fails
        else
        {
            for(int i=top;i>=0;i--)
                {
                    cout<<S[i]<<"\t";
                }
        }
}
void menu()
{
        cout<<"\n \t Main Menu\n 1.Push\n 2.Pop\n 3. To check is Empty\n 4. To check is full\n 5.Display\n";
}
int main()
{
        Stacktype<int>Stack(MaxStackSize);
        int ch,x;
        do
        {
            menu();
            cout<<"\nEnter the choice[1-5]\n";
            cin>>ch;
            switch(ch)
            {
                case 1:
                if(Stack.IsFull()==1){
                    cout<<"\nOverflow! Stack is Full!";
                    break;
                }
                else{
                    cout<<"\nEnter value to push into the stack\n";
                    cin>>x;
                    Stack.Push(x);
                    Stack.Display();
                }
                //break;
                case 2:
                if(Stack.IsEmpty()==1)
                {
                    cout<<"\nUnderflow!Stack is Empty!";
                    break;
                }
                else{
                    x=Stack.Pop();
                    cout<<"\nPoped value is \t"<<x<<endl;
                    Stack.Display();
                }
                break;
                case 3:
                    if(Stack.IsEmpty()==1){
                        cout<<"\n Stack is Empty!";
                        break;
                    }
                    else{
                        cout<<"\n Stack is not Empty!";
                    }
                    break;
                case 4:
                    if(Stack.IsFull()==1){
                        cout<<"\n Stack is Full!";
                        break;
                    }
                    else{
                        cout<<"\n Stack is not Full!";
                    }
                    break;
                case 5:
                    Stack.Display();
                }
        }while(ch>=1&&ch<=5);
return 0;
}
