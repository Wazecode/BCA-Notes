#include <iostream>
#include <algorithm>
using namespace std;

void modify(int *arr) {
    rotate(arr, arr+3, arr+5);
    rotate(arr, arr+2, arr+4);
}

int main() {

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        *(arr + i) = i * 2;
    }

    modify(arr);
    for (int i = 0; i < 5; i++)
        cout << *(arr + i) << " ";

    

    return 0;
}