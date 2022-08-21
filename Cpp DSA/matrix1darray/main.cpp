#include <iostream>

using namespace std;

int main()
{
    char ch='y;';
    while(ch=='y'||'Y')
    {
        cout <<"\t=============================\t"<<endl;
        cout<<"\t\tMenu\t"<<endl;
        cout<<"\t 1.Diagonal Matrix\t"<<endl;
        cout<<"\t 2.Lower Triangular Matrix\t"<<endl;
        cout<<"\t 3.Upper Triangular Matrix\t"<<endl;
        cout<<"\t 4.Symmetric Matrix\t"<<endl;
        cout <<"\t==============================\t"<<endl;
        int x;
        switch(x):
        case 1:
            cout << "\nEnter the number of rows: ";
            cin >> rows;
            cout << "Enter the number of columns: ";
            cin >> columns;
            if(rows != columns)
            {
                cout << "\nRows and Columns must be equal!\n";
            }
            else
                for(int i=0; i<rows; i++)
                {
                for(int j=0; j<columns; j++)
                {
                    if(i == j)
                        cout << array[i] << "\t";
                    else
                        cout << "0\t";
                }
                }
            break;
        case 2:
            cout << "\nEnter the number of rows: ";
            cin >> rows;
            cout << "Enter the number of columns: ";
            cin >> columns;
    }
        cout<<"Do you want to continue?";
        cin>>ch;



    }
    return 0;
}
