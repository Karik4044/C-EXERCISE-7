#include <iostream>
using namespace std;

int main(){
	int n, a[1000], b[1000];
	cout <<"nhap so phan tu : ";
	cin >> n;
	cout <<"nhap mang 1\n";
	for(int i = 0; i < n; i++){
		cout <<"Nhap phan tu thu "<<(i + 1)<<" : ";
		cin >> a[i];
	}
	cout <<"nhap mang 2\n";
	for(int i = 0; i < n; i++){
		cout <<"Nhap phan tu thu "<<(i + 1)<<" : ";
		cin >> b[i];
	}
	cout <<"ket qua: ";
	for(int i = 0; i < n; i++)
		cout << (a[i]* b[i]) << " ";
}