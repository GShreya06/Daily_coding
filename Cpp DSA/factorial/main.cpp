#include <iostream>
using namespace std;
int factorial(int f)
{
    int fact=1;
    if(f==1&&f<0){
        return 1;
    }
    else{
        for(int i=1;i<=f;i++)
              fact*=i;
    return fact;
    }
}
int main()
{
    int n;
    cout<<"\nEnter a number:";
    cin>>n;
    int res=factorial(n);
    cout<<"\nFactorial of "<<n<<" is "<<res<<endl;
    return 0;
}
