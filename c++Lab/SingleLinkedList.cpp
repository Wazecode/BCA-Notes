#include <cstdio>
#include <iostream>
#include <assert.h>
using namespace std;

class node {
    public:
        int data;
        node *link;

        node(int x=0) {
            data = x;
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
        void append(int);
        void print();
        void insert(int,int);
        void poke(int, int);
		void reverse();
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

void Llist::append(int val) {
    node *n = new node(val);
    if(head == NULL){
        head = n;
    } else {
        node *tmp = head;
        while (tmp->link != NULL) {
            tmp = tmp->link;
        }
        tmp->link = n;
    }
}

void Llist::print() {
    node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->link;
    }
    cout << endl;
}

void Llist::insert(int key, int val) {
	assert(key <= length() && key >= 0);
	node *tmp = head;
	node *n = new node(val);
	for(int i = 1; i < key; i++)
		tmp = tmp->link;

	// For position zero
	if (key == 0) {
		n->link = head;
		head = n;
	}else {
		n->link = tmp->link;
		tmp->link = n;
	}
}

void Llist::poke(int pos, int val) {
	peek(pos)->data = val;
}

void Llist::reverse() {
	node *tmp = head;
	node *endnode = peek(length()-1);
	int len = length();
	for (int i = len - 2; i >= 0; i--) {
		tmp = peek(i);
		tmp->link->link = tmp;
		tmp->link = NULL;
	}
	head = endnode;
}

int main() {
	
	Llist list;
	int x,y;
	char opt;
	
	const char *help =	"1. append\n"
					"2. peek\n"
					"3. poke\n"
					"4. insert\n"
					"5. print\n"
					"6. reverse\n"
					"7. length\n"
					"h. help\n"
					"q, quit\n";
	
	while(1) {
		cout << "Enter an option(h for help):";
		cin >> opt;
		switch(opt) {
			case '1' : cout << "Enter the value to append: ";
					   cin >> x;
					   list.append(x);
					   break;
			case '2' : cout << "Enter the position to peek: ";
					   cin >> x;
					   cout << "value: " << list.peek(x) << endl;
					   break;
			case '3' : cout << "Enter the position and value: ";
					   cin >> x >> y;
					   list.poke(x, y);
					   break;
			case '4' : cout << "Enter the position and value: ";
					   cin >> x >> y;
					   list.insert(x, y);
					   break;
			case '5' : cout << "the items in the list are" << endl;
					   list.print();
					   break;
			case '6' : list.reverse();
					   break;
			case '7' : cout << list.length() << endl;
					   break;
		 	case 'h' : puts(help);
					   break;
			case 'q' : return 0;
			default : cout << "Invalid Input" << endl;
		}
	}
    return 0;
}
