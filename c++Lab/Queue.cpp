#include <iostream>

using namespace std;

const int MAX_ARRAY_SIZE = 5;

class queue {
    private:
        int arr[MAX_ARRAY_SIZE];
        int front, rear;

    public:
        queue() {
            front = rear = -1;
            for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
                arr[i] = 0;
            }
        }

        bool isFull();
        bool isEmpty();
        void enqueue(int);
        int dequeue();
        int count();
        void display();
};

bool queue::isFull() {
    return (rear == 4);
}

bool queue::isEmpty() {
    return (rear == -1);
}

void queue::enqueue(int val) {
    if (isFull()) {
        cout << "Queue is Full" << endl;
    } else if (isEmpty()) {
        rear = front = 0;
        arr[rear] = val;
    } else {
        rear++;
        arr[rear] = val;
    }
}

int queue::dequeue() {
    if (isEmpty()) {
        cout << "Empty Queue" << endl;
        return 0;
    } else if (rear == front) {
        int x = arr[rear];
        arr[rear] = 0;
        rear = front = -1;
        return x;
    } else {
        int x = arr[front];
        arr[front] = 0;
        front++;
        return x;
    }
}

int queue::count() {
    return (rear - front + 1);
}

void queue::display() {
    cout << "All the values in the queue are" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    queue q1;
    int x;
    char option;

    const char *help = "\nWhat operation do you want to perform?\n"
        "1 -> Enqueue\n"
        "2 -> Dequeue\n"
        "3 -> isEmpty\n"
        "4 -> isFull\n"
        "5 -> count\n"
        "6 -> display\n"
        "c -> clearscreen\n"
        "q -> quit\n"
        "h -> help\n";

    while(true) {
        cout << "Press 'h' for help" <<  endl
             << "Enter your option: ";

        cin >> option;

        switch (option) {
            case '1': cout << "Enter a value to Enqueue:";
                cin >> x;
                q1.enqueue(x);
                break;
            case '2' : cout << "Dequeued value:" << q1.dequeue() << endl;
                break;
            case '3' : cout << (q1.isEmpty() ? "queue is empty" : "queue is not empty") << endl;
                break;
            case '4' : cout << (q1.isFull() ? "queue is full" : "queue is not full") << endl;
                break;
            case '5' : cout << "Number of items in queue:" << q1.count() << endl ;
                break;
            case '6' : q1.display();
                break;
            case 'c' : system("cls");
                break;
            case 'q' : return 0;
            case 'h' : puts(help);
                break;
            default : cout << "Wrong Input" << endl;
        }
    }
        return 0;
}
