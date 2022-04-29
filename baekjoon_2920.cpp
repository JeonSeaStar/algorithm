#include <iostream>

using namespace std;

int main()
{
	int n[8];

	for (int i = 0; i < 8; i++)
	{
		cin >> n[i];
	}

	if (n[0] == 1)
	{
		for (int j = 0; j < 8; j++)
		{
			if (n[j] != j + 1)
			{
				cout << "mixed";
				break;
			}
			else if(j == 7){ cout << "ascending"; }
		}
	}
	else if (n[0] == 8)
	{
		for (int j = 7; j >= 0; j--)
		{
			if (n[j] != j + 1)
			{
				cout << "mixed";
				break;
			}
			else if (j == 0) { cout << "descending"; }
		}
	}
	else { cout << "mixed"; }
}