#include <iostream>
using namespace std;
void arrayinput(int a[]){
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
}
void insertionSort(int a[], int n)
{
    int i, key, j;
    for (i=1;i<n;i++){
        key = a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j=j-1;}
        a[j+1]=key;
    }
}
void printArray(int a[],int n){
    for (int i=0;i<n;i++)
        cout << a[i] <<" ";
    cout << endl;
}
int main()
{
    int a[5];
    cout<<"Enter Marks out of 50:"<<endl;
    arrayinput(a);
    int n = sizeof(a)/sizeof(a[0]);
    insertionSort(a,n);
    cout<<"SORTED ARRAY OF MARKS:"<<endl;
    printArray(a,n);
    return 0;
}
