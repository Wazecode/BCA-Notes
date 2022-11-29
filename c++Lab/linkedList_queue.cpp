#include<iostream>

using namespace std;

class node {
    public:

        int data;
        node *link;

        node(int val, node *l) {
            data = val;
        link = l;
    }
};

class queue {
    private:
        node *head;
    public:
        queue() {
            head = NULL;
        }

        void enqueue(int);
        int dequeue();
        void print();
};

void queue::enqueue(int val) {
    node *n = new node(val, head);
    head = n;
}

int queue::dequeue() {
   if (head == NULL) {
       cout << "Queue is Empty" << endl;
       return -1;
   } else if (head->link == NULL) {
       int n = head->data;
       head = NULL;
       return n;
   } else {
       node *tmp = head;

       while (tmp->link->link != NULL)
           tmp = tmp->link;

       int n = tmp->link->data;
       tmp->link = NULL;
       return n;
   }
}

void queue::print() {
    node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->link;
    }
    cout << endl;
}


int main() {
    queue q;
    int x;
    char opt;

    const char *help = "1. Enqueue\n"
        "2. Dequeue\n"
        "3. print\n"
        "h. help\n"
        "q. quit\n";

    while(1) {
        cout << "Enter the option(h for help):";
        cin >> opt;

        switch (opt) {
            case '1': cout << "Enter the value :" ;
                cin >> x;
                q.enqueue(x);
                break;
                case '2' : cout << "The dequeued value is " << q.dequeue() << endl; break;
                case '3' : q.print(); break;
                case 'h' : puts(help); break;
                case 'q' : return 0;
                default : cout << "Invalid Input";
        }

    }
}
