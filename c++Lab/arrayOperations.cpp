#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 10;

class array {
    private:
        int arr[MAX_ARRAY_SIZE];
        int count;
    public:
        array() {
            for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
                arr[i] = 0;
            }
            count = 0;
        }
        void read();
        void insert(int);
        void print_array();
        int max();
        int min();
};


int main() {
    array a;
    a.read();
    a.insert(5);
    a.print_array();

    cout << "the max :" << a.max() << endl
        << "the min : " << a.min() << endl;

    return 0;
}

void array::read() {
    int x, size;
    cout << "Enter the size of the array:";
    cin >> size;
    cout << "Enter the values for the array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> x;
        insert(x);
    }
    cout << endl;
}

void array::print_array() {
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void array::insert(int x) {
    int pos;
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        if (arr[i] < x) {
            pos = i + 1;
        }
    }

    if (pos == MAX_ARRAY_SIZE) {
        for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
            if (arr[i] == 0) {
                arr[i] = x;
                return;
            }
        }
    }
    for (int i = MAX_ARRAY_SIZE - 1; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = x;
}

int array::max() {
    int x = 0;
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        if (x < arr[i]) {
            x = arr[i];
        }
    }
    return x;
}

int array::min() {
    int x = max();
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        if (x > arr[i] && arr[i] != 0) {
            x = arr[i];
        }
    }
    return x;
}
