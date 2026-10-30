#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
		for (int j = i; j <= 10; j++)
		{
			if (j < 3)
				continue;
			if (j != i)
				break;

			cout << "\t" << j << endl;
		}
	}

	return 0;
}