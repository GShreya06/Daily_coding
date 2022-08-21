#include <iostream>
using namespace std;
void towerofhanoi(int n,char from_rod,char to_rod,char dest_rod){
    if(n==1){
            cout<<"Move disk 1 from rod "<< from_rod<<" to rod "<< to_rod<<endl;
            return;
    }
    towerofhanoi(n-1,from_rod,dest_rod,to_rod);
    cout<<"Move disk "<< n <<" from rod "<< from_rod<<" to rod "<< to_rod<<endl;
    towerofhanoi(n-1,dest_rod,to_rod,from_rod);
}
int main()
{
    char A,B,C;
    int n=4;
    towerofhanoi(n,'A','C','B');
    return 0;
}

