#include <iostream>
using namespace std;
int main()
{
    int n,res;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
            if (i==0){
                res=1;
                break;
            }
            else{
                res=(n-1)+n;
                break;
            }

    }
    //for(int i=0;i<=n;i++){
    cout<<res<<endl;
    //}
    return 0;
}
