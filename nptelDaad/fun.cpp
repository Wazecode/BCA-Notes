#include <iostream>

using namespace std;

int fun(int m , int n) {
	int ans = 1;
	int count = 0;
	while(ans <= m) {
		count++;
		ans *= n;
	}
	return count;
}

int main() {

	cout << fun(2000, 3);


	return 0;
}
