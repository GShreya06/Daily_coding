#include<iostream>
using namespace std;
int arr[20][20]; //adjacency matrix
void displayMatrix(int v){
    int i, j;
    for(i = 1; i <= v; i++){
            for(j = 1; j <= v; j++){
                cout <<arr[i][j] << " ";
            }
    cout << endl;
    }
}
bool checkcomplete(int v){
    for(int i=1;i<=v;i++){
            for(int j=1;j<=v;j++){
                if(arr[i][j]==0){
                    if(i!=j)
                        return false;
                }
                else if(arr[i][j]==1){
                        if(i==j)
                        return false;
                }
            }
    }
    return true;
}
void connect(int u, int v){
    arr[u][v] = 1;
    arr[v][u] = 1;
}
int main(){
    int v =0,e=0;
    cout<<"Enter the number of edges\n";
    cin>>e;
    cout<<"Enter the vertices\n";
    cin>>v;
    cout<<"Enter the vertices that are connected\n";
    for(int i=0;i<e;i++){
            int a=0,b=0;
            cout<<"Connection "<<i+1<<": ";
            cin>>a>>b;
            connect(a,b);
    }
    cout<<"Adjacency Matrix\n";
    displayMatrix(v);
    if(checkcomplete(v))
        cout<<"\nThis is a complete graph";
    else
        cout<<"\nThis is not a complete graph";
    return 0;
}
