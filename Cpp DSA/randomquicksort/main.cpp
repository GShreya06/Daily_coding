#include <iostream>
#include <climits>
#include <fstream>
#include<cstdlib>
using namespace std;
class Quicksort
{
int A[1000];
public:
    int count , n ;
    int input();
    void Randomized_quick(int A[],int p ,int r);
    int Randomized_partition(int A[],int p, int r , int n);
    int partition(int A[],int p, int r);
    void display();
};
int Quicksort::input()
{
    count=0;
    cout<<"enter the size = ";
    cin>>n;
    cout<<"\n enter array for sorting :"<<endl;
    for(int i =1;i<n;i++){
            A[i]=(rand()%1000)+1;
    cout<<A[i]<<"\t";
    }
    Randomized_quick(A,1,n);
}
int Quicksort::partition(int A[],int p,int r)
{
    int x,i,j,temp,temp2;
    x=A[r];
    i=p-1;
    for(j=p;j<r;j++){
            if(A[j]<=x){
                i++;
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                count++;
            }
            else
                count++;
    }
    temp2 = A[i+1];
    A[i+1]=A[r];
    A[r]=temp2;
    return i+1;
}
void Quicksort::Randomized_quick(int A[],int p, int r){
    int q;
    if(p<r){
        q=Randomized_partition(A,p,r,n);
        Randomized_quick(A,p,q-1);
        Randomized_quick(A,q+1,r);
    }
}
int Quicksort::Randomized_partition(int A[],int p,int r,int n){
    int i,temp;
    i=p+rand()%(r-p+1);
    temp=A[r];
    A[r]=A[i]; A[i]=temp;
    return partition(A,p,r);
}
void Quicksort::display(){
    cout<<"\n Sorted array is :"<<endl;
    for(int i=1;i<=n;i++)
        cout<<A[i]<<"\t";
    cout<<"\n no of Comparisions are : "<<count<<endl;
}
int main() {
    Quicksort m;
    ofstream fout;
    fout.open("ABC.csv");
    char x;
    do{
        m.input();
        m.display();
        fout<<m.n<<","<<m.count;
        fout<<endl;
        cout<<"\n do u want to continue (y/n)"<<endl;
        cin>>x;
        }
    while(x=='Y'||x=='y');
    fout.close();
    return 0;
}
