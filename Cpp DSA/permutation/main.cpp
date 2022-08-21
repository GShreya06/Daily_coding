#include<iostream>
using namespace std;
void permutation(int a[], int size, int n){
    if (size==1){
        for (int i=0;i <n;i++)
             cout <<a[i] <<" ";
    cout<<"\n";
    }
    for (int i = 0;i< size;i++){
            permutation(a, size - 1, n);
    if (size % 2 == 1)
        swap(a[0], a[size-1]);
    else
        swap(a[i],a[size-1]);
    }
}
int main(){
    int n;
    cout<<"Enter the number of digits in the set: ";
    cin>>n;
    int a[n];
    cout<<"Enter the digits: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"<<<<PERMUTATION OF DIGITS>>>>"<<endl;
    permutation(a, n, n);
    return 0;
}
