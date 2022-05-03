#include <iostream>
using namespace std;

int main()
{
	int n, m, l;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		l = 0;
		m = 0;
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'O') { m++; }
			else if (s[j] == 'X') { m = 0; }
			l += m;
		}
		cout << l << endl;
	}
	return 0;
}