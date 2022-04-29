#include <iostream>
using namespace std;

int main()
{
	int t, n;
	string s;

	cin >> t;

	for (int k = 0; k < t; k++)
	{
		cin >> n >> s;

		for (int i = 0; i < s.length(); i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}