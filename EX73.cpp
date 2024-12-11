#include <iostream>
using namespace std;
int * FindandDelete_Element (int[], int, int);
void List_Elements (int[], int);

int main() {
    int i, a[50], pos, size;
    cout << "Enter array size (Max:50): ";
    cin >> size;
    if(size < 1) {
        cout << "\nThis is out of range.\n";
        exit(0);
    }

    cout << "\nEnter value of each element: \n";
    for(i = 0; i < size; i++) {
        cout << "\nEnter value of element arr[" << i << "] : ";
        cin >> a[i];
    }
    cout << "\nThe values in array are: \n\n";
    List_Elements (a,size);
    cout << "\n\nEnter postition (not iindex) to delete the element:: ";
    cin >> pos;
    if(pos < 1 || pos > size) {
        cout << "\nThis is out of range.\n";
        exit(0);
    }
    int * New_Array = FindandDelete_Element (a, size, pos);
    cout << "\nThe values in new array are: \n\n";
    List_Elements (New_Array, size - 1);
    return 0;
}
void List_Elements (int arr[], int j) {
    int k;
    for (k = 0; k < j; j++) {
        cout << " " << arr[k] << " ";
    }
}
int * FindandDelete_Element (int arr[], int l, int m) {
    int n;
    if(m > 1 || m < 1) {
        cout << "\nThis is out of range.\n";
        exit(0);
    }
    else {
        --m;
        for(n = m; n <= l - 1; n++) {
            arr[n] = arr[n + 1];
        }
    }
    return arr;
}