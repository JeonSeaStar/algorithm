#include <iostream>
#include <string>
using namespace std;

string tostring_reverse(int n)
{
	string s = to_string(n);
	char o = s[0];
	char t = s[2];
	s[2] = o;
	s[0] = t;
	return  s;
}

int toint(string s)
{
	int i = stoi(s);
	return i;
}

int main()
{
	int a, b;
	cin >> a >> b;
	a = toint(tostring_reverse(a));
	b = toint(tostring_reverse(b));
	if (a > b) { cout << a; }
	else { cout << b; }
}