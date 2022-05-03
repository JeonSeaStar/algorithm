#include <iostream>
using namespace std;

int main()
{
    int n;
    int m = 0;
    cin >> n;
    char s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m += s - '0';
    }
    cout << m;

    return 0;
}