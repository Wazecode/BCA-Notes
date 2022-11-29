#include <bits/stdc++.h>
using namespace std;

int prec(char c) {
	if (c == '^') 
		return 3;
	else if( c == '/' || c == '*')
		return 2;
	else if( c == '+' || c == '-')
		return 1;
	else
		return -1;
}

void infixToPostfix(string s) {
	stack<char> st;
	string result;

	for (int i = 0; i < s.length(); i++) {
		char c 	
	}
