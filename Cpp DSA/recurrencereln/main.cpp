#include<iostream>
#include<cmath>
using namespace std;
int T1(int n)
{
    if(n==0)
        return 1;
    else
        return (n+T1(n-1));
}

int T2(int n)
{
    if(n==0)
        return 1;
    else
        return (pow(n,2)+T2(n-1));
}

int T3(int n)
{
    if(n==1)
        return 1;
    else
        return (n+(2*T3(n/2)));
}

int main()
{
    int n,a;
    cout<<"VALUES OF RECURRENCE RELATIONS :"<<endl<<endl;
    cout<<"\t 1. T(n)= T(n-1)+n  ,T(0)=1 "<<endl;
    cout<<"\t 2. T(n)= T(n-1)+n^2 ,T(0)=1 "<<endl;
    cout<<"\t 3. T(n)= 2*T(n/2)+n ,T(1)=1 "<<endl;
    cout<<"\nEnter your choice(between 1,2,3) :	";
    cin>>a;
    if((a>3)||(a<=0))
        cout<<"\nInvalid choice!!";
    cout<<"\nEnter the value for n : ";
    cin>>n;

    if(a==1)
    {
        int res=T1(n);
        cout<<"\nResult : "<<res<<endl;
    }

    else if(a==2)
    {
        int res=T2(n);
        cout<<"\nResult : "<<res<<endl;
    }

    else if(a==3)
    {
        int res=T3(n);
        cout<<"\nResult : "<<res<<endl;
    }

    return 0;
}
