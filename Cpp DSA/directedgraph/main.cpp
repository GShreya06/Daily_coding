#include<iostream>
using namespace std;
int main()
{
    int m[10][10],a,b,sumin,sumout,n,v,i;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    for(a=0;a<n;a++){
        for(b=0;b<n;b++){
            m[a][b]=0;
            if(a!=b){
                cout<<"is there an edge between vertex "<<a+1<<" and "<<b+1<<" (1/0): ";
                cin>>m[a][b];
            }
        }
    }
    for(v=0;v<n;v++){
        sumin=sumout=0;
        for(i=0;i<n;i++){
            sumin=sumout+m[i][v];
            sumout=sumout+m[v][i];
    }
    cout<<"\n>> Vertex: "<<v+1<<" ";
    cout<<"\n In_degree: "<<sumin<<" ";
    cout<<"\n Out_degree: "<<sumout<<" ";
    cout<<"\n Total_degree: "<<sumin+sumout<<endl;
    }
    return 0;
}
