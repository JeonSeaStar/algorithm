#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	for (int i = 97; i < 123; i++)
	{
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == (char)i)
			{
				cout << j << " ";
				break;
			}
			else if(j == s.length() - 1 && s[j] != (char)i)
			{
				cout << -1 << " ";
			}
		}
	}
	
	return 0;
}