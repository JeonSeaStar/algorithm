#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c;
	string d;
	cin >> a >> b >> c;
	d = to_string(a * b * c);
	int n[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < d.length(); i++)
	{
		switch (d[i])
		{
		case '0':
			n[0]++;
			break;
		case '1':
			n[1]++;
			break;
		case '2':
			n[2]++;
			break;
		case '3':
			n[3]++;
			break;
		case '4':
			n[4]++;
			break;
		case '5':
			n[5]++;
			break;
		case '6':
			n[6]++;
			break;
		case '7':
			n[7]++;
			break;
		case '8':
			n[8]++;
			break;
		case '9':
			n[9]++;
			break;
		}
	}
	for (int i = 0; i < sizeof(n)/sizeof(int); i++)
	{
		cout << n[i] << endl;
	}
}