#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int n[4], e = x;
    n[0] = x;
    n[1] = y;
    n[2] = w - x;
    n[3] = h - y;

    for (int i = 0; i < 4; i++)
    {
        if (e > n[i]) { e = n[i]; }
    }

    cout << e;

    return 0;
}