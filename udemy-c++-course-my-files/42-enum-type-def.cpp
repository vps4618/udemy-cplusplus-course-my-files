#include <iostream>

using namespace std;

enum day{mon, tue, wed = 8, thurs, fri, satu, sun};

int main() {
	day d;
	d = mon;
	d = wed;

	cout << d;
}