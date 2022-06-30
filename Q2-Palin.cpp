/*Check if Palindrome*/
#include<iostream>
#include<string>

using namespace std;

class Palindrome {
        string text;

public:
        void input();
        bool check();
};

void Palindrome::input(){
        cout<<"Enter text:";
        cin>>text;
}

bool Palindrome::check(){
        int n = text.length();

        for(int i=0; i<n; i++) {
                if(text[i] != text[n-i-1])
                        return false;
        }
        return true;
}

int main() {
        Palindrome p;
        p.input();
        if(p.check())
                cout<<"The given input is a palindrome";
        else
                cout<<"The Given Input is NOT a palindrome";

        return 0;
}
