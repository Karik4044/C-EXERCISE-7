#include <iostream>
using namespace std;
int Largest_Element (int [], int);

int main() {
    int i, a[50], size;
    cout << "Enter array size (Max:50): ";
    cin >> size;
    if (size < 1) {
        cout << "\nThis is out of range.\n";
        exit(0);
    }

    cout << "\n Enter value of each element: \n";
    for(i = 0; i < size; i++) {
        cout << "\nEnter value of element arr[" << i << "] : ";
        cin >> a[i];
    }
    cout << "\nThe values in array are: \n\n";
    for(i = 0; i < size; i++) {
        cout << " " << a[i] << " ";
    }
    int largest_element = Largest_Element (a, size);

    cout << " \n\nLargest Element's value in an Array is: " << largest_element << endl;
    return 0;
}

int Largest_Element (int arr[], int k) {
    int largest = arr[0];
    int i;
    for(i = 0; i < k; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}