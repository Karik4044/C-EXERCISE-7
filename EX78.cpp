#include <iostream>
using namespace std;

#define MAX 100

int index(int [], int);

int main() {
    int arr[MAX], n;

    // Nhập số lượng phần tử ban đầu
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Nhập các phần tử của mảng
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }
    
    //In mang ra mang hinh
    cout << "Values of its elements: ";
	for(int j = 0; j < n; j++) {
		cout << arr[j] << " ";
	}
	index(arr, n);
    return 0;
}

int index(int arr[],int n) {
	int index, newElement;
    // Nhập vị trí và giá trị cần chèn
    cout << "\nEnter the index to insert the new element: ";
    cin >> index;
    cout << endl;
    cout << "Enter the value of the new element: ";
    cin >> newElement;

    // Kiểm tra vị trí hợp lệ
    if (index < 0 || index > n) {
        cout << "Invalid index! Please enter a valid index.\n";
        return 1;
    }

    // Dịch các phần tử phía sau vị trí index sang phải
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Chèn phần tử mới vào vị trí index
    arr[index] = newElement;

    // Tăng số lượng phần tử sau khi chèn
    n++;

    // In mảng sau khi chèn phần tử mới
    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
	return 1;
}
