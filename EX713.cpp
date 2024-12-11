#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of elements
    cout << "Enter number of elements (up to 50): ";
    cin >> n;

    // Check for valid input
    if (n < 1 || n > 50) {
        cout << "Please enter a number between 1 and 50." << endl;
        return 1; // Exit with an error code
    }

    int arr[50];

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the elements of the array
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find the largest number and its occurrences
    int largest = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            count = 1;
        } else if (arr[i] == largest) {
            count++;
        }
    }

    // Display the largest number and its occurrences
    cout << "Largest number: " << largest << endl;
    cout << "Occurrences: " << count << endl;

    return 0;
}