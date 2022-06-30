/* Write a Program to demonstrate a Consntructor in a derived using a friend function*/

#include<iostream>
using namespace std;

class Hello {
        string text;

public:
        Hello(){
                text = "Hello";
        }

        void say(){
                cout<<text<<endl;
        }

        friend class HelloWorld;
};

class HelloWorld : public Hello {
        
        string world = " World!!";
public:
        HelloWorld(Hello &h){
                text = h.text + world;
        }
};

int main() {
        Hello h;
        h.say();

        HelloWorld w(h);
        w.say();

        return 0;
}

