#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, x;
	int S[21] = { 0 };
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		string cal;
		cin >> cal;
		if (cal == "add")
		{
			cin >> x;
			if (S[x] == 0) { S[x] = 1; }
		}
		else if (cal == "remove")
		{
			cin >> x;
			if (S[x] == 1) { S[x] = 0; }
		}
		else if (cal == "check")
		{
			cin >> x;
			if (S[x] == 1) { cout << 1 << "\n"; }
			else { cout << 0 << "\n"; }
		}
		else if (cal == "toggle")
		{
			cin >> x;
			if (S[x] == 1) { S[x] = 0; }
			else { S[x] = 1; }
		}
		else if (cal == "all")
		{
			for (int j = 1; j < 21; j++)
				S[j] = 1;
		}
		else if (cal == "empty")
		{
			memset(S, 0, sizeof(S));
		}
	}
}