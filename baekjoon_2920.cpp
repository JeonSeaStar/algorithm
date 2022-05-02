#include <iostream>

using namespace std;

int main()
{
	int d[8] = { 1,2,3,4,5,6,7,8 };

	for (int i = 0; i < 8; i++)
	{
		cin >> d[i];
	}

	int asc = 0;
	int	des = 0;
	int	mixed = 0;
	for (int i = 0; i < 8; i++)
	{
		int n = d[i] + (i + 1);
		if (n == (i + 1) * 2)
		{
			asc++;
		}
		else if (n == 9)
		{
			des++;
		}
		else
		{
			mixed++;
		}
	}

	if (asc == 8) { cout << "ascending"; }
	else if (des == 8) { cout << "descending"; }
	else { cout << "mixed"; }
}