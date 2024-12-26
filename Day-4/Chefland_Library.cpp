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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[a[i]] = max(mp[a[i]], i + 1);
        int ans = 0;
        for (auto p : mp)
            ans += p.second;
        cout << ans << "\n";
    }
    return 0;
}
