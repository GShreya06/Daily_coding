#include <iostream>
#define MAX 100
using namespace std;
class diagonal
{
    private:
        int rows;
        int columns;

    public:
        int *array;

        diagonal();

        bool store(int, int, int);
        int retrieve(int, int);
        void show();
};

class lowerTriangular
{
    private:
        int rows;
        int columns;

    public:
        int *array;

        lowerTriangular();

        bool store(int, int, int);
        int retrieve(int, int);
        void show();
};

class upperTriangular
{
    private:
        int rows;
        int columns;

    public:
        int *array;

        upperTriangular();

        bool store(int, int, int);
        int retrieve(int, int);
        void show();
};

class symmetric
{
    private:
        int rows;
        int columns;

    public:
        int *array;

        symmetric();

        void store(int, int, int);
        int retrieve(int, int);
        void show();
};

diagonal::diagonal()
{
    int key;
    label:
        cout << "\nEnter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> columns;
    if(rows != columns)
    {
        cout << "\nRows and Columns must be equal!\n";
        goto label;
    }

    array = new int[rows];

    label_1:
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                cout << "\nRow " << i+1 << "\nColumn " <<  j+1;
                cout << "\nEnter the data: ";
                cin >> key;
                if(store(key, i, j))
                    true;
                else
                    goto label_1;
            }
        }
}

bool diagonal::store(int key, int i, int j)
{
    if(i != j && key != 0)
    {
        cout << "\nData must be zero!\nTry again!\n";
        return false;
    }
    else if(i == j)
    {
        array[i] = key;
        return true;
    }
    return true;
}

int diagonal::retrieve(int row, int column)
{
    if(row < 0 || column < 0 || row > rows-1 || column > columns-1)
    {
        cout << "\nInvalid Entry!\nTry again!\n";
        return -1;
    }
    else if(row == column)
    {
        int key = array[row];
        return key;
    }
    else
        return 0;
}

void diagonal::show()
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            if(i == j)
                cout << array[i] << "\t";
            else
                cout << "0\t";
        }
        cout << endl;
    }
}

lowerTriangular::lowerTriangular()
{
    int key;
    label:
        cout << "\nEnter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> columns;
    if(rows != columns)
    {
        cout << "\nRows and Columns must be equal!\n";
        goto label;
    }

    array = new int[rows*(rows+1)/2];

    label_1:
        for(int i=1; i<=rows; i++)
        {
            for(int j=1; j<=columns; j++)
            {
                cout << "\nRow " << i << "\nColumn " <<  j;
                cout << "\nEnter the data: ";
                cin >> key;
                if(store(key, i, j))
                    true;
                else
                    goto label_1;
            }
        }
}

bool lowerTriangular::store(int key, int i, int j)
{
    if(i < j && key != 0)
    {
        cout << "\nData must be zero!\nTry again!\n";
        return false;
    }
    else if(i >= j)
    {
        int k = (i * (i - 1) / 2 + j - 1);
        array[k] = key;
        return true;
    }
    return true;
}

int lowerTriangular::retrieve(int row, int column)
{
    if(row <= 0 || column <= 0 || row > rows || column > columns)
    {
        cout << "\nInvalid Entry!\nTry again!\n";
        return -99999;
    }
    else if(row < column)
        return 0;
    else
    {
        int key = array[row * (row - 1) / 2 + column - 1];
        return key;
    }
}

void lowerTriangular::show()
{
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=columns; j++)
        {
            if(i < j)
                cout << "0\t";
            else
            {
                int k = (i * (i - 1) / 2 + j - 1);
                cout << array[k] << "\t";
            }
        }
        cout << endl;
    }
}

upperTriangular::upperTriangular()
{
    int key;
    label:
        cout << "\nEnter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> columns;
    if(rows != columns)
    {
        cout << "\nRows and Columns must be equal!\n";
        goto label;
    }

    array = new int[rows*(rows+1)/2];

    label_1:
        for(int i=1; i<=rows; i++)
        {
            for(int j=1; j<=columns; j++)
            {
                cout << "\nRow " << i << "\nColumn " <<  j;
                cout << "\nEnter the data: ";
                cin >> key;
                if(store(key, i, j))
                    true;
                else
                    goto label_1;
            }
        }
}

bool upperTriangular::store(int key, int i, int j)
{
    if(i > j && key != 0)
    {
        cout << "\nData must be zero!\nTry again!\n";
        return false;
    }
    else if(i <= j)
    {
        int k = (i * (i - 1) / 2 + j - 1);
        array[k] = key;
        return true;
    }
    return true;
}

int upperTriangular::retrieve(int row, int column)
{
    if(row <= 0 || column <= 0 || row > rows || column > columns)
    {
        cout << "\nInvalid Entry!\nTry again!\n";
        return -1;
    }
    else if(row > column)
        return 0;
    else
    {
        int key = array[row * (row - 1) / 2 + column - 1];
        return key;
    }
}

void upperTriangular::show()
{
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=columns; j++)
        {
            if(i > j)
                cout << "0\t";
            else
            {
                int k = (i * (i - 1) / 2 + j - 1);
                cout << array[k] << "\t";
            }
        }
        cout << endl;
    }
}

symmetric::symmetric()
{
    int key;
    label:
        cout << "\nEnter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> columns;
    if(rows != columns)
    {
        cout << "\nRows and Columns must be equal!\n";
        goto label;
    }

    array = new int[rows*(rows+1)/2];

    cout << "\nEnter the Lower Triangular Elements:\n";
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "\nRow " << i << "\nColumn " <<  j;
            cout << "\nEnter the data: ";
            cin >> key;
            store(key, i, j);
        }
    }
}

void symmetric::store(int key, int i, int j)
{
    int k = (i * (i - 1) / 2 + j - 1);
    array[k] = key;
}

int symmetric::retrieve(int row, int column)
{
    if(row <= 0 || column <= 0 || row > rows || column > columns)
    {
        cout << "\nInvalid Entry!\nTry again!\n";
        return -1;
    }
    else if(row < column)
    {
        int temp = row;
        row = column;
        column = temp;
    }
    int key = array[row * (row - 1) / 2 + column - 1];
    return key;
}

void symmetric::show()
{
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=columns; j++)
        {
            if(i < j)
                cout << array[(j * (j - 1) / 2 + i - 1)] << "\t";
            else
                cout << array[(i * (i - 1) / 2 + j - 1)] << "\t";
        }
        cout << endl;
    }
}

class matrixNarray
{
    public:
        int ch;
        void options();
        int choice();
        void choiceCalling(int);
        void sub_options();
        void diagonal_matrix(diagonal, int);
        void lower_triangular_matrix(lowerTriangular, int);
        void upper_triangular_matrix(upperTriangular, int);
        void symmetric_matrix(symmetric, int);
};

void matrixNarray::options()
{
    cout << "\n----------- MENU -----------";
    cout << "\n1. DIAGONAL MATRIX"
        << "\n2. LOWER TRIANGULAR MATRIX"
        << "\n3. UPPER TRIANGULAR MATRIX"
        << "\n4. SYMMETRIC MATRIX"
        << "\n0. EXIT";
}

int matrixNarray::choice()
{
    cout << "\n\nEnter the number of your choice: ";
    cin >> ch;
    return ch;
}

void matrixNarray::choiceCalling(int ch)
{
    switch(ch)
    {
        case 1:
        {
            cout << "\n======= DIAGONAL MATRIX ======\n";
            int c;
            diagonal d;
            while(true)
            {
                cout << "\n=========== MATRIX 1D ===========\n";
                cout << "\n======= DIAGONAL MATRIX ======\n";
                sub_options();
                c = choice();
                if(c == 0)
                {
                    delete[] d.array;
                    break;
                }
                cout << "\n=========== MATRIX 1D ===========\n";
                cout << "\n======= DIAGONAL MATRIX ======\n";
                diagonal_matrix(d, c);
                cout << "\nPress Enter to continue...";
                cin.ignore();
                getchar();
            }
        }
            break;
        case 2:
        {
            cout << "\n=== LOWER TRIANGULAR MATRIX ===\n";
            int c;
            lowerTriangular l;
            while(true)
            {
                cout << "\n=========== MATRIX 1D ===========\n";
                cout << "\n=== LOWER TRIANGULAR MATRIX ===\n";
                sub_options();
                c = choice();
                if(c == 0)
                {
                    delete[] l.array;
                    break;
                }
                cout << "\n=========== MATRIX 1D ===========\n";
                cout << "\n=== LOWER TRIANGULAR MATRIX ===\n";
                lower_triangular_matrix(l, c);
                cout << "\nPress Enter to continue...";
                cin.ignore();
                getchar();
            }
        }
            break;
        case 3:
        {
            cout << "\n=== UPPER TRIANGULAR MATRIX ===\n";
            int c;
            upperTriangular u;
            while(true)
            {
                cout << "\n=========== MATRIX 1D ===========\n";
                cout << "\n=== UPPER TRIANGULAR MATRIX ===\n";
                sub_options();
                c = choice();
                if(c == 0)
                {
                    delete[] u.array;
                    break;
                }
                cout << "\n=========== MATRIX 1D ===========\n";
                cout << "\n=== UPPER TRIANGULAR MATRIX ===\n";
                upper_triangular_matrix(u, c);
                cout << "\nPress Enter to continue...";
                cin.ignore();
                getchar();
            }
        }
            break;
        case 4:
        {
            cout << "\n====== SYMMETRIC MATRIX =====\n";
            int c;
            symmetric s;
            while(true)
            {
                cout << "\n=========== MATRIX 1D ===========\n";
                cout << "\n====== SYMMETRIC MATRIX =====\n";
                sub_options();
                c = choice();
                if(c == 0)
                {
                    delete[] s.array;
                    break;
                }
                cout << "\n=========== MATRIX 1D ===========\n";
                cout << "\n====== SYMMETRIC MATRIX =====\n";
                symmetric_matrix(s, c);
                cout << "\nPress Enter to continue...";
                cin.ignore();
                getchar();
            }
        }
            break;
        case 0:
            break;
        default:
            cout << "\n########### WRONG CHOICE... ###########\n";
    }
}

void matrixNarray::sub_options()
{
    cout << "\n------- SUB MENU -------";
    cout << "\n1. RETRIEVE"
        << "\n2. DISPLAY"
        << "\n0. EXIT";
}

void matrixNarray::diagonal_matrix(diagonal d, int c)
{
    if(c == 1)
    {
        int row, column, key;
        cout << "\nEnter the retrieval Row: ";
        cin >> row;
        cout << "Enter the retrieval comlumn: ";
        cin >> column;
        key = d.retrieve(row-1, column-1);
        if(key != -1)
            cout << "\nRetrieved key at row " << row << " and column " << column << ": " << key << endl;
    }
    else if(c == 2)
    {
        cout << "\nDiagonal Matrix\n===============\n";
        d.show();
    }
    else if(c == 0)
        return;
    else
        cout << "\n########### WRONG CHOICE... ###########\n";
}

void matrixNarray::lower_triangular_matrix(lowerTriangular l, int c)
{
    if(c == 1)
    {
        int row, column, key;
        cout << "\nEnter the retrieval Row: ";
        cin >> row;
        cout << "Enter the retrieval coulmn: ";
        cin >> column;
        key = l.retrieve(row, column);
        if(key != -99999)
            cout << "\nRetrieved key at row " << row << " and column " << column << ": " << key << endl;
    }
    else if(c == 2)
    {
        cout << "\nLower Triangular Matrix\n=======================\n";
        l.show();
    }
    else if(c == 0)
        return;
    else
        cout << "\n########### WRONG CHOICE... ###########\n";
}

void matrixNarray::upper_triangular_matrix(upperTriangular u, int c)
{
    if(c == 1)
    {
        int row, column, key;
        cout << "\nEnter the retrieval Row: ";
        cin >> row;
        cout << "Enter the retrieval coulmn: ";
        cin >> column;
        key = u.retrieve(row, column);
        if(key != -99999)
            cout << "\nRetrieved key at row " << row << " and column " << column << ": " << key << endl;
    }
    else if(c == 2)
    {
        cout << "\nUpper Triangular Matrix\n=======================\n";
        u.show();
    }
    else if(c == 0)
        return;
    else
        cout << "\n########### WRONG CHOICE... ###########\n";
}

void matrixNarray::symmetric_matrix(symmetric s, int c)
{
    if(c == 1)
    {
        int row, column, key;
        cout << "\nEnter the retrieval Row: ";
        cin >> row;
        cout << "Enter the retrieval comlumn: ";
        cin >> column;
        key = s.retrieve(row, column);
        if(key != -99999)
            cout << "\nRetrieved key at row " << row << " and column " << column << ": " << key << endl;
    }
    else if(c == 2)
    {
        cout << "\nSymmetric Matrix\n================\n";
        s.show();
    }
    else if(c == 0)
        return;
    else
        cout << "\n########### WRONG CHOICE... ###########\n";
}
int main()
{
    int choice;
    matrixNarray ob;
    do
    {
        cout << "\n=========== MATRIX 1D ===========\n";
        ob.options();
        choice = ob.choice();
        if(ob.ch == 0)
            break;
        cout << "\n=========== MATRIX 1D ===========\n";
        ob.choiceCalling(choice);
        cout << "\nPress Enter to continue...";
        cin.ignore();
        getchar();
    }while(1);

    return 0;
}
