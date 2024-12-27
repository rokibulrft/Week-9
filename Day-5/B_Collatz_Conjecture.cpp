#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;
        while (k > 0 && x != 1)
        {
            long long ost = max(1LL, (x / y + 1) * y - x);
            ost = min(ost, k);
            x += ost;
            while (x % y == 0)
                x /= y;
            k -= ost;
        }
        cout << x + k % (y - 1) << "\n";
    }
    return 0;
}
