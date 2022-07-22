// title: b.cpp
// date: 2022-07-21 20:33:30
#include <bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<long long> a(n + 1), cf(n + 1), cb(n + 1);
    int b = 0;
    cf[1] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i > 1 && a[i] < a[i - 1])
        {
            cf[i] = a[i - 1] - a[i] + cf[i - 1];
        }
        else
        {
            cf[i] = cf[i - 1];
        }
    }
    cb[n] = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] < a[i + 1])
        {
            cb[i] = cb[i + 1] + a[i + 1] - a[i];
        }
        else
        {
            cb[i] = cb[i + 1];
        }
    }
    int s, t;
    for (int i = 0; i < m; i++)
    {
        cin >> s >> t;
        if (s > t)
        {
            cout << cb[t] - cb[s];
        }
        else
        {
            cout << cf[t] - cf[s];
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}