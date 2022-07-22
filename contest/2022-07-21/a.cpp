// title: a.cpp
// date: 2022-07-21 20:33:18
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
        int x;
        cin >> x;
        int a[4];
        for (int i = 1; i < 4; i++)
        {
            cin >> a[i];
        }
        int j = x, c = 1;
        while (a[j] != 0)
        {
            j = a[j];
            c++;
        }
        if (c == 3)
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