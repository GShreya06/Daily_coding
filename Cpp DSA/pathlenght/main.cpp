#include <iostream>
using namespace std;
void multiply(int a[][3], int b[][3], int res[3][3]){
    int mul[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
                mul[i][j] += a[i][k] * b[k][j];
            }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
              res[i][j] = mul[i][j];
        }
    }
}
void power(int a[3][3], int res[3][3],int n){
    if (n == 1){
        for (int i =0;i<3;i++){
           for (int j=0;j<3;j++) {
                res[i][j] = a[i][j];
           }
        }
        return;
    }
    power(a, res, n / 2);
    multiply(a, a, res);
    if(n%2!=0)
        multiply(res, a, res);
}
int main(){
    int a[3][3] = { { 1, 1, 1 },{ 0, 0, 1 },{ 0, 1, 0 } };
    int k,s,d;
    cout<<"Enter the path length: ";
    cin>>k;
    int res[3][3]={0};
    power(a, res, k);
    for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout<<res[i][j]<<" ";
            }
    cout << "\n";
    }
    cout<<"Enter the source and the destination: ";
    cin>>s>>d;
    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++){
                if(i==s&&j==d)
                     cout <<"\nNumber of paths of path length "<<k<<" between "<<s<<" and "<<d<<"="<<res[i][j];
             }
    cout << "\n";
    }
    return 0;
}
