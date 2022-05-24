#include <iostream>
#include <string.h>
using namespace std;

int B[25][25];
bool V[25][25];
int N, C;

void Neighbor(int x, int y)
{
	V[x][y] = true;
	C++;

	if (B[x][y - 1] == 1 && V[x][y - 1] == false && y != 0)
	{
		Neighbor(x, y - 1);
	}
	if (B[x - 1][y] == 1 && V[x - 1][y] == false && x != 0)
	{
		Neighbor(x - 1, y);
	}
	if (B[x][y + 1] == 1 && V[x][y + 1] == false && y != 24)
	{
		Neighbor(x, y + 1);
	}
	if (B[x + 1][y] == 1 && V[x + 1][y] == false && x != 24)
	{
		Neighbor(x + 1, y);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string x;
		cin >> x;

		for (int j = 0; j < N; j++)
		{
			V[i][j] = x[j]; //¿©±îÁö
		}
	}

	for (int m = 0; m < N; m++)
	{
		for (int n = 0; n < N; n++)
		{
			if (B[m][n] == 1 && V[m][n] == false)
			{
				Neighbor(m, n);
				cout << C << "\n";
				C = 0;
			}
		}
	}
}