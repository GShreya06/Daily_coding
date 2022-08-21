#include <iostream>
using namespace std;
int neg(int p1){
    int ans;
    if(p1==0)
        ans=1;
    else
       ans=0;
    return ans;
}
int funor(int q1,int p1){
    if((q1==1&&p1==1)||(q1==1&&p1==0)||(q1==0&&p1==1))
       return 1;
    else if(q1==0&&p1==0)
        return 0;
}
int cond(int c,int d){
    if(c==1&&d==0)
        return 0;
    else if((c==1&&d==1)||(c==0&&d==1)||(c==0&&d==0))
        return 1;
}
int main()
{
    int q,p,f1,f2,f3;
    char ch='y';
    do{
        cout<<"Enter the boolean value for q :";
        cin>>q;
        cout<<"Enter the boolean value for p :";
        cin>>p;
        f1=neg(p);//negation
        f2=funor(q,p);//or
        f3=cond(f1,f2);//conditional
        cout<<"~p"<<"->"<<"q"<<"v"<<"p"<<endl;
        cout<<f3<<"   "<<q<<" "<<p;
        cout<<"\nDo you want to continue?"<<endl;
        cin>>ch;
    }while(ch=='y');
    return 0;
}
