#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 5;

	cout << "a: " << ++a << endl;
	cout << "b: " << b++ << endl;

	cout << "a after operation: " << a << endl;
	cout << "b after operation: " << b << endl;

	return 0;
}