#include <iostream>
using namespace std;
int main(){
    int i,n,l;
    cout<<"Enter number of internal nodes: ";
    cin>>i;
    cout<<"\nEnter the number of children each node can have: ";
    cin>>n;
    l=i*(n-1)+1;
    cout<<"\nLeaf nodes of "<<n<<"-ary tree = "<<l;
    return 0;
}
