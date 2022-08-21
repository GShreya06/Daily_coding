#include <iostream>
using namespace std;
int main()
{
    int x,y;
    char ch='y';
    do{
        cout<<"Enter the values of x and y"<<endl;
        cin>>x>>y;
        cout<<"1.Conjunction"<<endl;
        cout<<"2.Disjunction"<<endl;
        cout<<"3.Exclusive OR"<<endl;
        cout<<"4.Conditional"<<endl;
        cout<<"5.Bi-Conditional"<<endl;
        cout<<"6.Exclusive Nor"<<endl;
        cout<<"7.Negation"<<endl;
        cout<<"8.Nand"<<endl;
        cout<<"9.Nor"<<endl;
        int c,ans=0;
        cin>>c;
        cout<<"x y";
        switch(c)
        {
            case 1:
                cout<<" Conjunction"<<endl;
                cout<<x<<" "<<y<<" "<<(x*y)<<endl;
                break;
            case 2:
                cout<<" Disjunction"<<endl;
                ans=x+y;
                if(ans>1)
                    ans=1;
                cout<<x<<" "<<y<<" "<<ans<<endl;
                break;
            case 3:
                cout<<" Exclusive OR"<<endl;
                if(x!=y)
                    ans=1;
                cout<<x<<" "<<y<<" "<<ans<<endl;
                break;
            case 4:
                cout<<" Conditional"<<endl;
                if((x==1)&&(y==0))
                    ans=0;
                cout<<x<<" "<<y<<" "<<ans<<endl;
                break;
            case 5:
                cout<<" Bi-Conditional"<<endl;
                if(x==y)
                    ans=1;
                else
                    ans=0;
                cout<<x<<" "<<y<<" "<<ans<<endl;
                break;
            case 6:
                cout<<" Exclusive Nor"<<endl;
                if(x!=y)
                    ans=1;
                else
                    ans=0;
                cout<<x<<" "<<y<<" "<<ans<<endl;
                break;
            case 7:
                cout<<" Negation"<<endl;
                if(x==0)
                    ans=1;
                else
                    ans=0;
                cout<<x<<" FOR x:"<<ans<<endl;
                if(y==0)
                    ans=1;
                else
                    ans=0;
                cout<<y<<" FOR y:"<<ans<<endl;
                break;
            case 8:
                cout<<" NAND"<<endl;
                if((x==1)&&(y==1))
                    ans=0;
                else
                    ans=1;
                cout<<x<<" "<<y<<" "<<ans<<endl;
                break;
            case 9:
                cout<<" Nor"<<endl;
                if(x==0 && y==0)
                    ans=1;
                else
                    ans=0;
                cout<<x<<" "<<y<<" "<<ans<<endl;
                break;
            default:
                cout<<endl<<"INVALID CHOICE";
        }
        cout<<"Do you want to continue?"<<endl;
        cin>>ch;
    }
    while(ch=='y');
    return 0;
}
