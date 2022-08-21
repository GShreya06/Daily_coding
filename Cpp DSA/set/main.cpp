#include <iostream>
#include <cmath>
using namespace std;
void setinput(int Set_a[],int n){
    for(int i=0;i<n;i++)
        cin>>Set_a[i];
}
void setdisplay(int Set_a[],int n) {
    for(int i=0;i<n;i++)
        cout<<" "<<Set_a[i];
}
int setcardinality(int Set_a[],int n,int cnt){
    for(int i=0;i<n;i++)
        cnt++;
    return cnt;
}
bool ismember(int a,int Set_a[],int n){
    int i;
    for(i=0;i<n;i++)
        if(Set_a[i]==a){
                return true;
        }
    if(i==n)
        return false;
}
void powerset(int Set_a[],int n){
    int p=pow(2,n);
    cout<<"\nNumber of Elements in power Set_a: "<<p<<endl;
    cout<<"\nElements in power Set_a:\n";
    cout<<"{}";//as null set is the subset of every set
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j))
               cout<<Set_a[j]<<" ";
    }
    cout<<endl;
    }
}
int main()
{
    int Set_a[20],n,cnt,c,a;
    bool x;
    cout<<"\nHow many element you want in set?\n";
    cin>>n;
    cout<<"\nEnter the elements for set\n";
    setinput(Set_a,n);
    cout<<"\nDisplaying the elements of set\n";
    setdisplay(Set_a,n);
    c=setcardinality(Set_a,n,cnt);
    cout<<"\nCardinality of the set: "<<c<<"\n";
    cout<<"\nSearching an element in a set\n";
    cout<<"\nEnter element to be searched:\n";
    cin>>a;
    x=ismember(a,Set_a,n);
    cout<<"\nElement present: "<<x<<"\n";
    cout<<"\n>>>For 0,Element is not present and For 1,Element is present<<<\n";
    powerset(Set_a,n);
    return 0;
}
