#include<iostream>
#include <assert.h>
using namespace std;

class node {
    public:
        int data;
        node *link;

        node(int x=0, node *l = NULL) {
            data = x;
			link = l;
        }
};

class Llist {
    private:
        node *head;
    public:
        Llist() {
            head = NULL;
        }

        int length();
        node* peek(int);
        void push(int);
		int pop();
        void print();
        void poke(int, int);
	
};

int Llist::length() {
    node *tmp = head;
    int n = 0;
    while(tmp != NULL) {
        tmp = tmp->link;
        n++;
    }

    return n;
}

node* Llist::peek(int pos) {
	assert(pos <= length());
	
	node *tmp = head;
	for (int i = pos; i > 0; i--) 
		tmp = tmp->link;
	
	return tmp;
}

void Llist::push(int val) {
    node *n = new node(val,head);
	head = n;
}

int Llist::pop() {
	if (head == NULL) {
		cout << "Stack Underflow" << endl;
		return -1;
	}
	node *tmp = head;
	int val = head->data;
	head = head->link;
	free(tmp);
	return val;
}

void Llist::print() {
    node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->link;
    }
    cout << endl;
}

void Llist::poke(int pos, int val) {
	peek(pos)->data = val;
}

int main() {
	
	Llist list;
	int x,y;
	char opt;
	
	const char *help =	"1. push\n"
					"2. pop\n"
					"3. poke\n"
					"4. peek\n"
					"5. print\n"
					"6. length\n"
					"h. help\n"
					"q, quit\n";
	
	while(1) {
		cout << "Enter an option(h for help):";
		cin >> opt;
		switch(opt) {
			case '1' : cout << "Enter the value to push: ";
					   cin >> x;
					   list.push(x);
					   break;
			case '2' : 	cout << "poped value" << list.pop() << endl;
						break;
			case '3' : cout << "Enter the position and value: ";
					   cin >> x >> y;
					   list.poke(x, y);
					   break;
			case '4' : cout << "Enter the position to peek: ";
					   cin >> x;
					   cout << "value: " << list.peek(x)->data << endl;
					   break;
			case '5' : cout << "the items in the list are" << endl;
					   list.print();
					   break;
			case '6' : cout << list.length() << endl;
					   break;
		 	case 'h' : puts(help);
					   break;
			case 'q' : return 0;
			default : cout << "Invalid Input" << endl;
		}
	}
    return 0;
}
