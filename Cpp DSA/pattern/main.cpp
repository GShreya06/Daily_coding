#include <iostream>
using namespace std;
int main()
{
    int i,t,p,j,rows;
    cout<<"Enter number of rows:";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for (t=1;t<=rows-i;t++){
            cout<<" ";
        }
        for(p=1;p<=i;p++){
            cout<<p;
        }
        for(j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
