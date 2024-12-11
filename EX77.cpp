#include <iostream>
using namespace std;

#define MAX 50

void loop(int arr[], int n);

int main() {
	int n, arr[MAX];
	cout << "Enter values of array: ";
	cin >> n;
	for(int i = 0; i < n; i++) {
		cout << "Enter number of array[" << i << "]: ";
		cin >> arr[i];
	}
	cout << "Values of its elements: ";
	for(int j = 0; j < n; j++) {
		cout << arr[j] << " ";
	}
	cout << "\nNumber that appear 2 or more: ";
	loop(arr, n);
	return 0;
}

//Tim so bi lap 2 lan hoac hon trong mang
void loop(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 1;
        // Kiểm tra phần tử đã được xét chưa
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted) {
            continue;
        }

        // Đếm số lần xuất hiện của phần tử
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count >= 2) {
            cout << arr[i] << " ";
        }
    }
}