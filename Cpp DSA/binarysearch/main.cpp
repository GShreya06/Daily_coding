#include<iostream>
#include<cmath>
using namespace std;
class bs{
    public:
    int binarySearch();
    template<typename T>
    int binarySearch(T arr[], int n, T key){
        int first = 0;
        int last = n-1;
        while(first <= last){
            int mid = (first + last) / 2; //calculating mid
            if(arr[mid] == key)
                return mid;
            else if(arr[mid] < key)
                first = mid + 1;
            else
                last = mid - 1;
        }
        return -1; //returning -1 when element not found
    }
 };

int main(){
    int num , arr[100];
    int index, x;
    bs b1; //b1 is object of class bs

    cout << "\nPlease enter number of elements in the array: ";
    cin >> num;

    cout << "\nEnter the elements in ascending order!\n";
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    cout << "\nEnter the value that is to be searched : ";
    cin >> x;
    cout << endl;
    index = b1.binarySearch(arr, num, x);//calling member function of class bs
    if(index == -1)
        cout << "\n" <<"-> "<< x << " is not present in the array!!" << endl;
    else
        cout << "\n"<<"-> "<< x << " is present in the array at index " << index <<endl;
    return 0;
}
