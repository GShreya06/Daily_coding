#include <iostream>
using namespace std;
class Relations{
    int a[10][10],row,col;
    public:
        Relations(){
            row=0;
            col=0;
        }
        Relations(int r,int c){
            row=r;
            col=c;
        }
        void input(int r, int c){
            row=r;
            col=c;
            cout<<"Enter the elements in the Matrix: ";
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cin>>a[i][j];
                    }
            }
        }
    bool checkReflexive(){
        for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    if(i==j){
                        if(a[i][j]!=1)
                           return false;
                    }
                }
        }
        return true;
    }
    bool checkSymmetric(){
        for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    if((i!=j)&&(a[i][j]&&a[j][i]))
                             return true;
                  }
        }
        return false;
    }
    bool checkTransitive(){
        for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    if(a[i][j]==1){
                        for(int k=0;k<col;k++){
                            if(a[j][k]&&!(a[i][k]))
                               return false;
                        }
                    }
                }
        }
        return true;
    }
    bool checkAntiSymmetry(){
        for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    if((i!=j)&&(a[i][j]&&a[j][i]))
                        return false;
                }
        }
        return true;
    }
    void display(){
        cout<<"\nMATRIX\n";
        for(int i=0;i<row;i++){
                for(int j=0;j<col;j++)
                  cout<<a[i][j]<<"\t";
        cout<<"\n";
        }
    }
};
int main()
{
    int r,c;
    cout<<"Enter Dimensions:\n";
    cin>>r>>c;
    Relations o1;
    o1.input(r,c);
    o1.display();
    bool re=o1.checkReflexive();
    if(re)cout<<" ~Relation is Reflexive\n";  bool s=o1.checkSymmetric();
    if(s)cout<<"  ~Relation is Symmetric\n";   bool t=o1.checkTransitive();
    if(t)cout<<"  ~Relation is Transitive\n";  bool a=o1.checkAntiSymmetry();
    if(a)cout<<"  ~Relation is Anti-Symmetric\n";
    return 0;
}

