#include <iostream>
#include <string>
using namespace std;

int main() {

    string str1 = "Welcome ";
    string str2 = "students";

    // str1 += str2; o
    // strcat(str1, str2); x
    // str1.append(str2); o
    str1.insert(str2); // x


    cout << str1;

    return 0;
}