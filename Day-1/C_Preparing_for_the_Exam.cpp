#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        unordered_set<int> known_questions;
        for (int i = 0; i < k; i++)
        {
            int q;
            cin >> q;
            known_questions.insert(q);
        }

        string result;
        for (int i = 0; i < m; i++)
        {
            int missing_question = a[i];
            if (known_questions.size() == n - 1 && known_questions.find(missing_question) == known_questions.end())
            {
                result += '1';
            }
            else
            {
                result += '0';
            }
        }

        cout << result << endl;
    }
    return 0;
}