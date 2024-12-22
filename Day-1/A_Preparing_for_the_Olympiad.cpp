#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n + 1] = {0};

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int num, ans = 0;
        cin >> num;

        for (int i = 0; i < n - 1; ++i)
        {
            cin >> num;
            if (a[i] > num)
            {
                ans += a[i] - num;
            }
        }
        ans += a[n - 1];

        cout << ans << endl;
    }
    return 0;
}
