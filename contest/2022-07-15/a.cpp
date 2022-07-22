// title: a.cpp
// date: 2022-07-15 19:41:02
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
        cin >> n;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> k;
            if (i < n)
            {
                if (k == 0 && ans)
                {
                    ans++;
                }
                else
                {
                    ans += k;
                }
            }
            // cout << ans << '\n';
        }
        cout << ans << '\n';
    }
}
int main()
{

    solve();
    return 0;
}