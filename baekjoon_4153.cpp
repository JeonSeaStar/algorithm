#include <iostream>
using namespace std;

string pythagoras(int x, int y, int z)
{
    int a = x * x + y * y;
    int b = z * z;

    if (a == b) { return "right"; }
    else { return "wrong"; }
}

int main()
{
    while (true)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 0 && y == 0 && z == 0)
        {
            return 0;
        }
        else
        {
            if (x > z)
            {
                int n = x;
                x = z;
                z = n;
            }
            if (y > z)
            {
                int n = y;
                y = z;
                z = n;
            }
            cout << pythagoras(x, y, z) << endl;
        }
    }

    return 0;
}