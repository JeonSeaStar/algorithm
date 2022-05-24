#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int H, W, N;
    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;

        int a = N % H;
        int b = N / H;

        if (a > 0) { b++; }
        else { a = H; }

        cout << a * 100 + b << endl;
    }
}