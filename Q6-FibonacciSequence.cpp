/* Fibonacci Sequence using class and constructor for initializing */
#include<iostream>
using namespace std;

class Fibonacci {
        int a,b;

public:
        int c;
        Fibonacci(){
                a=0;
                b=1;
                c=0;
        }

        void print(int n){
                for(int i=0; i<n; i++){
                        cout<<a<<endl;
                        c=b;
                        b=b+a;
                        a=c;
                }
        }
};

int main() {
        Fibonacci f;
        f.print(15);

        return 0;
}
