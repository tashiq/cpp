// title: b.cpp
// date: 2022-07-15 19:37:43
#include <bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};

void solve()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(2 * n);
        for (int j = 0; j < 2 * n; j++)
            cin >> a[j];
        sort(a.begin(), a.end());
        bool ans = true;
        for (int j = 0; j < n; j++)
        {
            if (a[j + n] - a[j] < k)
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}