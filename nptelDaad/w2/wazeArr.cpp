#include <iostream>
using namespace std;

void print_arr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
