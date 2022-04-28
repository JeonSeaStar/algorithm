#include <iostream>

using namespace std;

int main()
{
	int max, c;
	int a[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
		if (i == 0)
		{
			max = a[i];
			c = i;
		}
		else
		{
			if (a[i] > max)
			{
				max = a[i];
				c = i;
			}
		}
	}

	cout << max << endl << c + 1;
	return 0;
}