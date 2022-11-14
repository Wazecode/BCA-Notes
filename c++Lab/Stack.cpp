#include <iostream>
using namespace std;

class stack {
    private:
        int arr[5], top;
    public:
        stack() {
            top = -1;
            for (int i = 0; i < 5; i++) {
                arr[i] = 0;
            }
        }

        bool isEmpty();
        bool isFull();
        void push(int);
        int pop();
        int count();
        void change(int,int);
        void display();
        int peek(int);
        void help();
        void interactive();

};

bool stack::isEmpty() {
    return (top == -1);
}

bool stack::isFull() {
    return (top == 4);
}

void stack::push(int val) {
    if (isFull()) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        arr[top] = val;
    }
}

int stack::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        return 0;
    } else {
        int popval = arr[top];
        arr[top] = 0;
        top--;
        return popval;
    }
}

int stack::peek(int pos) {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        return 0;
    } else {
        return arr[pos];
    }
}

int stack::count() {
    return (top + 1);
}

void stack::change(int pos, int val) {
    arr[pos] = val;
    cout << "Value change at location" << pos << endl;
}

void stack::display() {
    cout << "All values in the stack are " << endl;
    for (int i = 4; i > -1; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void stack::help() {
    puts("1-> push()\n"
         "2-> pop\n"
         "3-> isEmpty\n"
         "4-> isFull\n"
         "5-> peek\n"
         "6-> count\n"
         "7-> change\n"
         "8-> display\n"
         "h-> help\n"
         "c-> clear\n"
         "q-> quit\n"
         );
}

void stack::interactive() {
    cout << "Edit stack mode" << endl;
    int x,y;
    char opt;
    while(true) {
        cout << "Enter a option(h for help):";
        cin >> opt;
        switch (opt) {
            case '1': cout << "Enter an item to push in the stack: ";
                cin >> x;
                push(x);
                break;
            case '2' : cout << "pop value" << pop() << endl;
                break;
            case '3' :
                if (isEmpty()) {
                    cout << "Stack is Empty" << endl;
                } else {
                    cout << "Stack is not Empty" << endl;
                }
                break;
            case '4' :
                if (isFull()) {
                    cout << "Stack is full" << endl;
                } else {
                    cout << "Stack is not full" << endl;
                }
                break;
            case '5' :
                cout << "Enter the position; ";
                cin >> x;
                cout << "peek position is " << x << "is " << peek(x) << endl;
                break;
            case '6' :
                cout << "Numeber of items is stack are " << count() << endl;
                break;
            case '7' :
                cout << "Enter the position and the value of item you want to change:";
                cin >> x >> y;
                change(x,y);
                break;
            case '8' :
                cout << "Display stack" << endl;
                display();
                break;
            case 'h' :
                help();
                break;
            case 'c' :
                system("cls");
                break;
            case 'q' : return;
            default:
                cout << "Wrong Input" << endl;

        }
    }
}

int main() {
    stack s;
    s.interactive();
    return 0;
}
