#include <iostream>
using namespace std;
int main()
{
    int ary[5]={32,45,46,42,36};
    cout<<"MARKS OF STUDENTS:\n";
    for(int i=0;i<5;i++){
        cout<<ary[i]<<" ";
    }
    for(int i=0;i<5;i++){
        ary[i]+=5;
    }
    cout<<"\nUPGRADED MARKS OF STUDENTS:\n";
    for(int i=0;i<5;i++){
        cout<<ary[i]<<" ";
    }
    return 0;
}
