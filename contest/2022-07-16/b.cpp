// title: b.cpp
// date: 2022-07-16 20:33:11
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
        int n, l, r;
        cin >> n >> l >> r;
        bool a = true;
        vector<int> ans(n);
        for (int i = 1; i <= n; i++)
        {
            int x = ceil(l / (float)i);
            if (x * i <= r)
            {
                ans[i - 1] = (x * i);
            }
            else
            {
                a = false;
                break;
            }
        }
        if (a)
        {
            cout << "YES\n";
            for (int x : ans)
            {
                cout << x << ' ';
            }
            cout << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }
}
int main()
{
    solve();
    return 0;
}