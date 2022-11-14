#include<iostream>
using namespace std;

class Cirqueue {
    int front,rear,count,arr[5];

    public:

    Cirqueue() {
        front = rear = -1;
        count = 0;
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }

    bool isFull();
    bool isEmpty();
    void enqueue(int);
    int dequeue();
    int queueCount();
    void display();

};

bool Cirqueue::isFull() {
    if (front == 4) {
        return true;
    } else {
        return false;
    }
}

bool Cirqueue::isEmpty() {
    if (rear == front) {
        return true;
    } else {
        return false;
    }
}

void Cirqueue::enqueue(int n) {
    if(isFull()) {
        cout << "Full Queue" << endl;
        return;
    } else {
        rear = (rear + 1) % 5;
        arr[rear] = n;
        count++;
    }
}

int Cirqueue::dequeue() {
    int x = 0;
    if (isEmpty()) {
        cout << "Empty Queue" << endl;
        return x;
    } else {
        front = (front + 1) % 5;
        x = arr[front];
        arr[front] = 0;
        count--;
        return x;
    }
}

int Cirqueue::queueCount() {
    return count;
}

void Cirqueue::display() {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}


int main() {
    Cirqueue ql;
    int val;
    char opt;

    do {
        cout << "What operation do you want to perform:" << endl
             << "q : quit" << endl
             << "1 : Enqueue" << endl
             << "2 : Dequeue" << endl
             << "3 : isEmpty" << endl
             << "4 : isFull" << endl
             << "5 : display" << endl
             << "6 : count" << endl
             << "c : clear screen" << endl;

        cin >> opt;

        switch (opt) {
            case 'q': return 0;
                break;
            case '1': cout << "Enqueue operation" << endl << "Enter value to enqueue:";
                cin >> val;
                ql.enqueue(val);
                break;
            case '2': cout << "Dequeuing :" << ql.dequeue() << endl;
                break;
            case '3': cout << (ql.isEmpty() ? "queue is Empty" : "queue is not Empty") << endl;
                break;
            case '4': cout << (ql.isFull() ? "queue is Full" : "queue is not Full") << endl;
                break;
             case '5': ql.display();
                break;
             case '6': cout << "Queue count: " << ql.queueCount();
                break;
             case 'c': system("cls");
                break;
             default :
                 cout << "Wrong input entered" << endl;
        }
    } while(opt != 'q');

    return 0;
}
