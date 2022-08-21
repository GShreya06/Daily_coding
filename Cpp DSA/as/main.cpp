#include<iostream>
#include<iomanip>
using namespace std;
int neg(int n)
{
if(n==0)
return 1;
else if(n==1)
return 0;
}
int orf(int a, int b)
{
if((a==1&&b==1)||(a==1&&b==0)||(a==0&&b==1))
return 1;
else if(a==0&&b==0)
return 0;
}
int con(int c,int d)
{
if(c==1&&d==0)
return 0;
else if((c==1&&d==1)||(c==0&&d==1)||(c==0&&d==0))
return 1;
}
int main()
{

int p,q,a1,a2,a3;
cout<<"\nenter the boolean value for P"<<" ";
cin>>p;
cout<<"\nenter the boolean value for Q"<<" ";
cin>>q;
a1=neg(p); // ~p (negation)

a2=orf(q,p); // Qvp (OR)

a3=con(a1,a2); //~p->Qvp (conditional)

cout<<"value of the given expression "<<a3;
return 0;
}
