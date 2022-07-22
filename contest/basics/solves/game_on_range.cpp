// title: game_on_range.cpp
// date: 2022-07-14 12:40:42
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+1;
bool adj[N][N];
map<pair<int, int>, int  > ans;

void partition(int l, int r){
    if(l==r){
        ans[{l,r}] = l;
        return;
    }
    else if(adj[l+1][r]){
        ans[{l,r}] = l;
        partition(l+1, r);
    }
    else if(adj[l][r-1]){
        ans[{l,r}] = r;
        partition(l, r-1);
    }
    else 
        for(int d=l+1; d<r; d++){
            if(adj[l][d-1]&&adj[d+1][r]){
                ans[{l, r}] = d;
                partition(l, d-1);
                partition(d+1, r);
            }
        }
}

void solve()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        memset(adj, false, sizeof adj);

        vector<pair<int, int> > cur;
        for(int i=0; i<n; i++){
            int a, b;
            cin>>a>>b;
            adj[a][b] = true;
            cur.push_back({a,b});
        }
        partition(1, n);
        for(auto x:cur){
            cout<<x.first<<' '<<x.second<<' '<<ans[x]<<'\n';
        }
        cout<<'\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}