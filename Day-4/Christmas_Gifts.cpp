#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, l, w;
        cin >> h >> l >> w;
        long long int area = 2 * (h * l + l * w + w * h);
        cout << 1000 / area << "\n";
    }
}