#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long int r, bl, both;
    both = (a * b) / __gcd(a, b);
    both = n / both;
    r = (n / a) - both;
    bl = (n / b) - both;
    long long int ans = 0;
    ans = both * max(p, q) + r * p + bl * q;
    cout << ans << "\n";
}