#include <iostream>
using namespace std;
const int n=5;
void getinput(int ary[]){
    for(int i=0;i<n;i++){
        cin>>ary[i];
    }
}
int getmaxindex(int ary[],int start ,int end){
    int max=start;
    for(int i=start;i<=end;i++){
        if(ary[start]<ary[i]){
            max=i;
        }
    }
    return max;
}
void swap(int ary[],int first,int second){
    int temp=ary[first];
    ary[first]=ary[second];
    ary[second]=temp;
}
void selectionsort(int ary[])
{
    for(int i=0;i<n;i++){
        int last = n-i-1;
        int MaxIndex = getmaxindex(ary,0,last);
        swap(ary,MaxIndex,last);
    }
}
void display(int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int ary[n];
    cout<<"Enter numbers:"<<endl;
    getinput(ary);
    selectionsort(ary);
    cout<<"Displaying Array:"<<endl;
    display(ary);
    return 0;
}
