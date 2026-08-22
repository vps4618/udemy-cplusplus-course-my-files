#include <iostream>
#include <string>
using namespace std;

int main23_1() {
	// name with one word
	/*string str;

	cout << "May i know your name : ";
	cin >> str;

	cout << "welcome " << str << endl;*/

	// name with multiple words
	string str2;

	cout << "Please enter your name : ";
	getline(cin, str2);

	cout << "Welcome to c++ programming " << str2;
	
	return 0;
}