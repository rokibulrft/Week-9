#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for (int i = 0; i < (r - l + 1) / 2; i++)
    {
        cout << l + i * 2 << " " << l + i * 2 + 1 << endl;
    }
}