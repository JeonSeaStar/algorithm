#include <iostream>
using namespace std;

int main()
{
    int a[26]{ 0 };
    int m = 0;
    int n = 0;
    int c;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
            a[s[i] - 65]++;
        else
            a[s[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (m < a[i])
        {
            m = a[i];
            c = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (m == a[i])
        {
            n++;
        }
    }

    if (n > 1) { cout << '?'; }
    else { cout << (char)(c + 65); }

    return 0;
}