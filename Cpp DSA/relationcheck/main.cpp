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
    cout<<"\nEnter Dimensions: ";
    cin>>r>>c;
    Relations r1;
    r1.input(r,c);
    r1.display();
    bool re=r1.checkReflexive();
    if(re)cout<<"\nRelation is Reflexive";  bool s=r1.checkSymmetric();
    if(s)cout<<"\nRelation is Symmetric";  bool t=r1.checkTransitive();
    if(t)cout<<"\nRelation is Transitive";  bool a=r1.checkAntiSymmetry();
    if(a)cout<<"\nRelation is Anti-Symmetric";  cout<<"\n";
    if(re&s&t)
        cout<<">>It is an Equivalence Relation\n";
    else if(re&a&t)
        cout<<">>It is a Partial Order Relation\n";
    else
        cout<<">>It is neither Partial Order nor Equivalence relation\n";
 return 0;
}



