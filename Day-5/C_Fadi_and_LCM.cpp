#include <bits/stdc++.h>
using namespace std;
long long int x;

long long int lcm(long long int a, long long int b)
{
    return a / __gcd(a, b) * b;
}

int main()
{
    cin >> x;
    long long ans;
    for (long long int i = 1; i * i <= x; i++)
    {
        if (x % i == 0 && lcm(i, x / i) == x)
        {
            ans = i;
        }
    }
    cout << ans << " " << x / ans;
}