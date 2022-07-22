// title: c.cpp
// date: 2022-07-16 20:33:02
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
        int n;
        cin >> n;
        vector<int> v(n);
        bool m = true;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % v[0])
                m = false;
        }
        if (m)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
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