#include <iostream>
using namespace std;
int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }
int main()
{
    int nPr,nCr,n,r;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of r:"<<endl;
    cin>>r;
    nPr = factorial(n) / factorial(n-r);
    nCr = factorial(n)/(factorial(n-r) * factorial(r));
    cout<<"Permutation of "<<n<<" is "<<nPr<<endl;
    cout<<"combination of "<<n<<" is "<<nCr<<endl;
    return 0;
}
