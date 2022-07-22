// title: ring_road.cpp
// date: 2022-07-17 21:27:47
#include <bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};

const int N = 1e2 + 1;
vector<pair<int, int>> adj[N];
vector<int> vis(N);
int cost = 0;

void solve()
{
    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int a, b, wt;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b >> wt;
            adj[a].push_back({b, wt});
            adj[b].push_back({a, -wt});
        }

        fill(vis.begin(), vis.end(), 0);

        cout << cost << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}