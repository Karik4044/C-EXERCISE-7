#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements (positive integer): ";
    cin >> n;

    // Validate input size
    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int arr[n]; // Declare the array with size n

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the array elements
    cout << "The array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Count prime numbers in the array
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    // Output the total number of prime numbers
    cout << "Total prime numbers in the array: " << count << endl;

    return 0;
}