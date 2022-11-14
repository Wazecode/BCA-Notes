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

void Llist::insert(int val, int key) {
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
    Llist n;
    cout << n.length() << endl;
    n.append(5);
    cout << n.length() << endl;
    n.append(8);
    n.append(7);
	n.insert(10, 2);
	n.poke(0, 2);
	cout << n.peek(0)->data;
	n.print();

	cout << endl;
	n.reverse();
	n.print();
    cout << n.length();

    return 0;
}
