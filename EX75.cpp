#include <iostream>
using namespace std;

#define MAX 50

void Average(int[], int);

int main() {
    int n, arr[MAX];
    cout << "Enter the range of array: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Values of its elements: ";
    for(int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    Average(arr, n);
    return 0;
}

void Average(int arr[], int n) {
    double average = 0;
    double divi = 2;
    int max = arr[0];
    for(int k = 0; k < n; k++) {
        if(arr[k] > max) {
            max = arr[k];
        }
    }
    int min = arr[0];
    for(int h = 0; h < n; h++) {
        if(arr[h] < min) {
            min = arr[h];
        }
    }
    average = max + min;
    cout << "\nAverage of the Largest and Smallest value of array is: " << average / divi;
}