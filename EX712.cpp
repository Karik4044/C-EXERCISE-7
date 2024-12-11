#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    int row, col;
    cout << "\nEnter the row number for sum calculation: ";
    cin >> row;
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += array[row][j];
    }
    cout << "Sum of elements in row " << row << " is: " << sum << endl;

    cout << "\nEnter the column number for sum calculation: ";
    cin >> col;
    sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += array[i][col];
    }
    cout << "Sum of elements in column " << col << " is: " << sum << endl;

    cout << "\nEnter the row number to find largest and smallest elements: ";
    cin >> row;
    int largest = array[row][0], smallest = array[row][0];
    for (int j = 1; j < cols; j++) {
        if (array[row][j] > largest) {
            largest = array[row][j];
        }
        if (array[row][j] < smallest) {
            smallest = array[row][j];
        }
    }
    cout << "Largest element in row " << row << " is: " << largest << endl;
    cout << "Smallest element in row " << row << " is: " << smallest << endl;

    cout << "\nEnter the column number to find largest and smallest elements: ";
    cin >> col;
    largest = array[0][col];
    smallest = array[0][col];
    for (int i = 1; i < rows; i++) {
        if (array[i][col] > largest) {
            largest = array[i][col];
        }
        if (array[i][col] < smallest) {
            smallest = array[i][col];
        }
    }
    cout << "Largest element in column " << col << " is: " << largest << endl;
    cout << "Smallest element in column " << col << " is: " << smallest << endl;

    return 0;
}