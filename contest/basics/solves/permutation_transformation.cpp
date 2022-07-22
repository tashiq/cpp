// title: permutation_transformation.cpp
// date: 2022-07-14 18:38:26
#include<bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};
const int N = 1e3;
vector<int> values(N);
vector<int> adj[N];
vector<int> depth(N);
vector<bool> vis(N);
void quick(int l, int r, int parent){
    if(l<=r){
        // find d
        int pos = -1, m=0;
        for(int i=l; i<=r; i++){
            if(m<values[i]){
                m = values[i];
                pos = i;
            }
        }
        adj[parent].push_back(m);
        // keep partitioning.
        quick(l, pos -1, m);
        quick(pos+1, r, m);
    }
}
void dfs(int vertex){
    vis[vertex] = true;
    for(auto x:adj[vertex]){
        if(!vis[x]){
            depth[x] = depth[vertex] + 1;
            dfs(x);
        }
    }
}
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); */
    // start stitching.

    int tt ;
    cin>>tt;
    while(tt--){
        fill(depth.begin(), depth.end(), 0);
        fill(vis.begin(), vis.end(), false);
        int n;
        cin>>n;
        int ma = 0;
        for(int i=1; i<=n; i++){
            cin>>values[i];
            ma = max(ma, values[i]);
            adj[values[i]].clear();
        }
        quick(1, n, 0);
        dfs(ma);
        for(int i=1; i<=n; i++){
            cout<<depth[values[i]]<<' ';
        }
        cout<<'\n';
    }
    
}