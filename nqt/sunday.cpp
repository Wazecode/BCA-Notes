#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> days;
	days["mon"] = 6;
	days["tue"] = 5;
	days["wed"] = 4;
	days["thu"] = 3;
	days["fri"] = 2;
	days["sat"] = 1;
	days["sun"] = 0;

	string day;
	int n;

	cout << "Enter the start day: ";
	cin >> day;
	cout << "Enter the number of days: ";
	cin >> n;

	cout << days[day] << endl;
	cout << "Output: " << 1 + (n - days[day] ) / 7;
}
