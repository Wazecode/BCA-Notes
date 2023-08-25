#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {10, 20, 50, 40, 10, 50};

    rotate(&arr[0], &arr[2], &arr[6]);
    remove(&arr[0], &arr[6], 10);
    remove(&arr[0], &arr[6], 10);
    remove(&arr[0], &arr[6], 10);

    for (int i = 0; i < 6; i++)
        cout << *(arr + i) << " ";

    return 0;
}