#include <iostream>
using namespace std;

int main()
{
    int n;
    float score[1000], max_score = 0, total_score = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
        if (max_score < score[i]) { max_score = score[i]; }
    }

    for (int i = 0; i < n; i++)
    {
        score[i] = score[i] / max_score * 100;
        total_score += score[i];
    }

    cout << total_score / n;

    return 0;
}