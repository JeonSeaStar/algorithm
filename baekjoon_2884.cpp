#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;
    m -= 45;
    if (m < 0)
    {
        h--;
        if (h < 0) { h = 23; }
        m = m + 60;
    }
    cout << h << " " << m;
}