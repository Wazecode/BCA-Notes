#include <iostream>
#include <cstring>
using namespace std;

int main() {

    string s = "hello World";

    cout << s.size() ;
    cout << s.length();
    cout << strlen(s.c_str());

    return 0;
}