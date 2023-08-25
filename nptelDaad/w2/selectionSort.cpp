#include <iostream>
#include "wazeArr.h"

using namespace std;

void selection_sort(int arr[], int len) {
	int s; 
	for (int i = 0; i < len - 1; i++) {
		s = i;
		for (int j = i + 1; j < len; j++) {
			if(arr[s] > arr[j]) s = j;
		}
		if(s != i) swap(arr[s] , arr[i]);
	}
}

int main() {
	int arr[10] = {9, 7, 34, 87, 133, 19, 54, 44, 79, 10};

	selection_sort(arr, 10);
	print_arr(arr, 10);
}

