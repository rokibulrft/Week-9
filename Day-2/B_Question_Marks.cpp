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
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0, d = 0, ans;
        for (int i = 0; i < 4 * n; i++)
        {
            if (s[i] == 'A')
            {
                a++;
            }
            else if (s[i] == 'B')
            {
                b++;
            }
            else if (s[i] == 'C')
            {
                c++;
            }
            else if (s[i] == 'D')
            {
                d++;
            }
        }
        ans = min(n, a) + min(n, b) + min(n, c) + min(n, d);
        cout << ans << "\n";
    }
}