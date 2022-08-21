#include <iostream>
using namespace std;
int fibrec(int n)
{
    if((n==1)||(n==0)){
            return(n);
    }
    else{
            return(fibrec(n-1)+fibrec(n-2));
    }
}
int main()
{
    int n ,a=0;
    cout <<"Enter the number of terms of series : ";
    cin>>n;
    cout <<"\nFibonacci Series :";
    while(a<n){
            cout<<" "<<fibrec(a);
            a++;
    }
    cout<<endl;
    return 0;
}
