#include <iostream>

using namespace std;

int binarySearch(int arr[], int len, int x);

int main() {
  int arr[] = {2, 8, 12, 17, 23, 28, 34, 39, 42, 44};
  int len = 10;

  cout << binarySearch(arr, len, 44);

  return 0;
}

int binarySearch(int arr[], int len, int x) {
  int high = len;
  int low = 0;
  int mid;

  while(low < high) {
    mid = (low + high) / 2;

    if(x > arr[mid]) low = mid;
    else if(x < arr[mid]) high = mid;
    else return mid;
  }
  return -1;
}
  
