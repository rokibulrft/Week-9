#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, c, ans = 0;
        cin >> n >> a >> b >> c;
        long long cycleSum = a + b + c;
        long long fullCycles = n / cycleSum;
        long long target = fullCycles * cycleSum;
        ans = fullCycles * 3;

        while (target < n)
        {
            if (ans % 3 == 0)
                target += a;
            else if (ans % 3 == 1)
                target += b;
            else
                target += c;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
