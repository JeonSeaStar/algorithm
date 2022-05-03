#include <iostream>

using namespace std;

int main()
{
	long n[10];
	long m[10];

	long x = 0;

	bool b = false;

	for (int i = 0; i < 10; i++)
	{
		cin >> n[i];

		if (i == 0)
		{
			m[0] = n[0] % 42;
			x++;
		}
		else
		{
			for (int j = 0; j < x; j++)
			{
				if (n[i] % 42 != m[j])
				{
					m[i] = n[i] % 42;
					b = true;
				}
				else
				{
					b = false;
					break;
				}
			}
		}

		if (b)
		{
			x++;
			b = false;
		}
	}

	cout << x;
	return 0;
}