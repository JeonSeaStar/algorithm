#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

int N, M, V;
int node[1001][1001];
bool visited[1001];

void Reset()
{
	for (int i = 0; i < 1001; i++)
	{
		visited[i] = false;
	}
}

void DFS(int v)
{
	visited[v] = true;
	cout << v << " ";
	for (int i = 1; i <= N; i++)
	{
		if (node[v][i] == 1 && visited[i] == false)
		{
			DFS(i);
		}
	}
}

void BFS(int v)
{
	visited[v] = true;
	cout << v << " ";

	queue<int> q;

	for (int i = 1; i <= N; i++)
	{
		if (node[v][i] == 1 && visited[i] == false)
		{
			visited[i] = true;
			cout << i << " ";
			q.push(i);
		}
	}

	while (!q.empty())
	{
		for (int i = 1; i <= N; i++)
		{
			if (node[q.front()][i] == 1 && visited[i] == false)
			{
				visited[i] = true;
				cout << i << " ";
				q.push(i);
			}
		}
		q.pop();
	};
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		node[x][y] = 1;
		node[y][x] = 1;
	}

	Reset();
	DFS(V);
	
	cout << "\n";

	Reset();
	BFS(V);
}