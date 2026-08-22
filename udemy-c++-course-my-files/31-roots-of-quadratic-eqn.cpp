#include <iostream>
#include <cmath>

using namespace std;

int main31() {
	float a, b, c, r1, r2;
	cout << "Enter a,b and c : " << endl;
	cin >> a >> b >> c;

	r1 = (float)(-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	r2 = (float)(-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	cout << "Roots are " << r1 << " and " << r2 << ".";

	return 0;
}