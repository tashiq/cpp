// title: a.cpp
// date: 2022-07-16 20:33:07
#include <bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};
const int N = 1e5 + 1;
int dp[N][N];
void solve()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, q;
        memset(dp, 0, sizeof dp);
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}