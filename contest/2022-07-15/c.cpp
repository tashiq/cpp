// title: c.cpp
// date: 2022-07-15 20:03:24
#include <bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};

void solve()
{
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        long long n, q, c;
        cin >> n >> c >> q;
        string s;
        cin >> s;

        map<long long, long long> com;
        com[1] = 1;
        com[n] = n;
        long long l, r, current_size = n;
        vector<long long> sizes;
        sizes.push_back(1);
        sizes.push_back(n);
        for (long long i = 0; i < c; i++)
        {
            cin >> l >> r;
            long long sz = r - l + 1;
            sizes.push_back(current_size + 1);
            sizes.push_back(current_size + sz);
            long long x = lower_bound(sizes.begin(), sizes.end(), l) - sizes.begin();
            long long y = lower_bound(sizes.begin(), sizes.end(), r) - sizes.begin();
            com[current_size + 1] = (l - sizes[x] + com[sizes[x]]) % (n + 1);
            com[current_size + r - l + 1] = (r - sizes[y] + com[sizes[y]]) % (n + 1);
            current_size += sz;
        }
        /* cout << '\n';
        for (auto x : com)
        {
            cout << x.first << ' ' << x.second << '\n';
        } */
        long long k;
        for (long long i = 0; i < q; i++)
        {
            cin >> k;
            // get nearest small size
            long long index = lower_bound(sizes.begin(), sizes.end(), k) - sizes.begin();
            long long sz = sizes[index];
            long long pos = com[sz];
            // calculate pos of string.
            long long spos = (pos + k - sz) % (n + 1);
            cout << s[spos - 1] << '\n';
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