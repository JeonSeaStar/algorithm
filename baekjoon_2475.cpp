#include <iostream>
using namespace std;

int main()
{
    int a;
    int b = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        b += a * a;
    }
    cout << b % 10;
}