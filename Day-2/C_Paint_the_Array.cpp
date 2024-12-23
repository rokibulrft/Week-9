#include <bits/stdc++.h>
using namespace std;

// #define int long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int g1 = 0;
        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, a[i]);
        }
        long long int g2 = 0;
        for (int i = 1; i < n; i += 2)
        {
            g2 = __gcd(g2, a[i]);
        }
        long long int ans = 0;
        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % g1 == 0)
            {
                flag = false;
            }
        }
        if (flag)
        {
            ans = g1;
        }
        else
        {
            flag = true;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % g2 == 0)
                {
                    flag = false;
                }
            }
            if (flag)
            {
                ans = g2;
            }
        }
        cout << ans << endl;
    }
}