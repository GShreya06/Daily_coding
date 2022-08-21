#include <iostream>
#include <cmath>
using namespace std;
int fun(int n){
    int res;
    res=4*pow(n,3)+2*n+9;
    return res;
}
int main()
{
    int f;
    f=fun(5);
    cout<<"RESULT IS:"<<f<<endl;
    return 0;
}
