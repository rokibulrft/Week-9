#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }

        int prob = 0;
        for (int i = 1; i <= n; i++)
        {
            if (p[i] % k != i % k)
            {
                prob++;
            }
        }

        if (prob == 0)
            cout << 0 << '\n';
        else if (prob == 2)
            cout << 1 << '\n';
        else
            cout << -1 << '\n';
    }
}