#include <iostream>
using namespace std;
float Average(float[], int);
void List_Elements(float[], int);

int main() {
    int size, i;
    float arr[100], average;
    cout << "Enter array size (Max:50): ";
    cin >> size;
    if(size < 1) {
        cout << "\nThis is out of range.\n";
        exit(0);
    }
    cout << "\nEnter value of each element: \n";
    for(i = 0; i < size; i++) {
        cout <<"\nEnter value of element arr[" << i << "] : ";
        cin >> arr[i];
    }
    cout <<"\nThe values in array are: \n\n";
    List_Elements (arr, size);
    float average_values = Average(arr, size);
    cout << "\nAverage of " << size << " numbers in array is = " << average_values << "\n";
    return 0;
}
void List_Elements (float arr[], int j) {
    int k;
    for(k = 0; k < j; k++) {
        cout << " " << arr[k] << " ";
    }
}

float Average (float arr[], int j) {
    int l;
    float average;
    float sum = 0.0;
    for(l = 0; l < j; l++) {
        sum +=arr[l];
    }
    average = sum / j;
    return average;
}