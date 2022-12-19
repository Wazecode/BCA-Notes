#include <iostream>
using namespace std;

void swap( int &x, int &y ) {
    int tmp = x;
    x = y;
    y = tmp;
}

void selectionSort( int arr[], int n ) {
    int i, j, min;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1 ; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;

            if(min != i)
                swap(arr[min], arr[i]);
        }
    }
}

void print(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int array[] = {64, 25, 12 , 22, 11};
    int n = 5;
    selectionSort(array, n);
    print(array, n);
    return 0;
}
