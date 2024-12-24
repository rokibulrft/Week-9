#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int power(int x, int n)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
        {
            ans = (1LL * ans % MOD * x % MOD) % MOD;
        }
        x = 1LL * x * x % MOD;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        cout << power(x, n) << endl;
    }
}