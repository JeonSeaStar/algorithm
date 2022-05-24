#include <iostream>
#include <string.h>
using namespace std;

int B[50][50];
bool V[50][50];
int T, M, N, K, C;

void Neighbor(int x, int y)
{
	V[x][y] = true;

	if (B[x][y - 1] == 1 && V[x][y - 1] == false && y != 0)
	{
		Neighbor(x, y - 1);
	}
	if (B[x - 1][y] == 1 && V[x - 1][y] == false && x != 0)
	{
		Neighbor(x - 1, y);
	}
	if (B[x][y + 1] == 1 && V[x][y + 1] == false && y != 49)
	{
		Neighbor(x, y + 1);
	}
	if (B[x + 1][y] == 1 && V[x + 1][y] == false && x != 49)
	{
		Neighbor(x + 1, y);
	}
}

void Reset()
{
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			B[i][j] = 0;
			V[i][j] = false;
			C = 0;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> M >> N >> K;

		Reset();

		for (int j = 0; j < K; j++)
		{
			int x, y;
			cin >> x >> y;
			B[x][y] = 1;
		}

		for (int m = 0; m < M; m++)
		{
			for (int n = 0; n < N; n++)
			{
				if (B[m][n] == 1 && V[m][n] == false)
				{
					C++;
					Neighbor(m, n);
				}
			}
		}

		cout << C << "\n";
	}
}