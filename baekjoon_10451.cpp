#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

int T, N, R;
int node[1001][1001];
bool visited[1001];
//bool visited[1001][1001];

void Reset()
{
	R = 0;
	for (int i = 0; i < 1001; i++)
	{
		visited[i] = false;

		for (int j = 0; j < 1001; j++)
		{
			node[i][j] = 0;
		}
	}
}

void DFS(int v)
{
	for (int i = 1; i <= N; i++)
	{
		if (node[v][i] == 1 && visited[i] == false)
		{
			visited[i] = true;
			DFS(i);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int j = 0; j < T; j++)
	{
		Reset();
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			int x;
			cin >> x;
			node[i + 1][x] = 1;
		}

		for (int i = 1; i <= N; i++)
		{
			if (!visited[i])
			{
				DFS(i);
				R++;
			}
			else
				continue;
		}

		cout << R << '\n';
	}
}