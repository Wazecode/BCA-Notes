// CPP program to illustrate
// concept of Virtual Functions

#include<iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class\n";
	}

	void show()
	{
		cout << "show base class\n";
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class\n";
	}

	void show()
	{
		cout << "show derived class\n";
	}
};

int main()
{
        base a;
        a.print();
        a.show();
        derived b;
        b.print();
        b.show();

        base *c;
        c = &b;

        c->print();
        c->show();

        return 0;
}

