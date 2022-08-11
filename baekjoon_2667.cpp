#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int B[25][25];
bool V[25][25];
int N, C, H;
vector<int> q;

int Dx[4] = { 1, -1, 0, 0 };
int Dy[4] = { 0, 0, 1, -1 };

void DFS(int x, int y)
{
	V[x][y] = true;
	H++;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + Dx[i];
		int ny = y + Dy[i];

		if (nx < 0 || ny < 0 || nx >= N || ny >= N)
			continue;

		if (B[nx][ny] == 1 && V[nx][ny] == false)
			DFS(nx, ny);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	C = 0;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < N; j++)
		{
			B[i][j] = s[j] - '0';
		}
	}

	for (int m = 0; m < N; m++)
	{
		for (int n = 0; n < N; n++)
		{
			if (B[m][n] == 1 && V[m][n] == false)
			{
				C++;
				H = 0;
				DFS(m, n);
				q.push_back(H);
			}
		}
	}

	cout << q.size() << "\n";
	sort(q.begin(), q.end());
	for(int i = 0; i < q.size(); i++)
		cout << q[i] << "\n";
}