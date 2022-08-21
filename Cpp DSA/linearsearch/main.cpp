#include <iostream>
using namespace std;
class Ls{
    public:
        int LinearSearch();
        template <class T>
        int LinearSearch(T arr[], int n, T x) {
            for (int i = 0; i < n; ++i) {
                if (arr[i] == x)
                    return i;
            }
            return -1; //element not found
        }
};
int main()
{
    int num , arr[100];
    int index, x;
    Ls l1; //object of class ls

    cout << "\nPlease enter number of elements in the array: ";
    cin >> num;

    cout << "\nEnter the elements \n";
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    cout << "\nEnter the value that is to be searched : ";
    cin >> x;
    index = l1.LinearSearch(arr, num, x);
    if (index != -1)
        cout <<"\n -> "<< x << " is present in the array at index " << index <<endl; //search successful
    else
        cout <<"\n -> "<< x << " is not present in the array \n" << endl;

    return 0;
}
