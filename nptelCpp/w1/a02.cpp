#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr(3);
    arr.resize(10);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    

    return 0;
}