#include <iostream>
using namespace std;

#define MAX 50

void averageodd(int[], int);
void averageeven(int[], int);

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
    cout << "\n";
    averageeven(arr, n);
    averageodd(arr, n);
    return 0;
}

//Gia tri trung binh cua so le
void averageodd(int arr[], int n) {
	double num, sum = 0;
	double count = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] % 2 != 0) {
			num = arr[i];
			sum += num;
			count++;
		}
	}
	cout << "\nAverage of odd: " << sum / count;
}
//Gia tri trung binh cua so chan
void averageeven(int arr[], int n) {
	double sum = 0, num;
	double count = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			num = arr[i];
			sum += num;
			count++;
		}
	}
	cout << "Averange of even: " << sum / count;
}