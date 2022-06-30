/*Demonstrate use of inline*/
#include<iostream>

using namespace std;

inline void compare(int a, int b){
        if(a>b)
                cout<<a<<" > "<<b<<endl;
        else
                cout<<b<<" > "<<a<<endl;
}

int main() {

        int a,b;
        cout<<"Enter Two numbers:";
        cin>>a>>b;
        compare(a,b);

        return 0;
}

