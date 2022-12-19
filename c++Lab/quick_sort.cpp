#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high) {
    if( low < high ) {
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int array[] = {30, 40, 90, 15, 20, 60, 50};
    int n = 7;
    quickSort(array, 0, n - 1);
    cout << "Sorted Array : " << endl;
    printArray(array, n);
    return 0;
}
