#include <iostream>
using namespace std;

int main()
{
    int n, max, min;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (i == 0)
        {
            max = a;
            min = a;
        }
        else
        {
            if (max < a) { max = a; }
            if (min > a) { min = a; }
        }
    }
    cout << min << " " << max;
    return 0;
}