#include <iostream>
#include <cmath>
using namespace std;
int check(int a,int b){
    int y=logb(a);
    return y;
}
int main()
{
    //T(n)=aT(n/b)+f(n) //a>=1,b>1,f(n) is an asymptomatically Positive function
    int n,f;
    cout<<"T(n)=8T(n/2)+1000 n\nHere a=8,b=2,f(n)=n"<<endl;
    int a=8;
    int b=2;
    int p=check(8,2);
    if(pow(n,1)<(pow(n,p))){
        cout<<"\n->case 1 implies here:T(n)=theta(n log b(a))";
    }
    else if(pow(n,1)==(pow(n,p))){
        cout<<"\n->case 2 implies here:T(n)=theta(n log b(a) log n)";
    }
    else if(pow(n,1)>(pow(n,p))){
        cout<<"\n->case 3 implies here:T(n)=theta(f(n))";
    }
    return 0;
}
