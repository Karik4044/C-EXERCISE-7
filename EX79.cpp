#include <iostream>
using namespace std;

#define MAX 50

void deletenum(int [], int);

int main() {
	int arr[MAX], n;
	cout << "Enter the size of array: ";
	cin >> n;
	for(int i = 0; i < n; i++) {
		cout << "Enter values of array[" << i << "]: ";
		cin >> arr[i];
	}
	cout << "Values of array: ";
	for(int j = 0; j < n; j++) {
		cout << arr[j] << " ";
	}
	deletenum(arr, n);
	return 0;
}

void deletenum(int arr[], int n) {
	cout << "\nArray after deletion: ";
    for (int i = 0; i < n; i++) {
        bool alreadyPrinted = false;
        for (int k = i + 1; k < n; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted) {
            continue;
        }
        cout << arr[i] << " ";
    }
}