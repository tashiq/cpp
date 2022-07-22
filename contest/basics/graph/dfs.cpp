// title: dfs.cpp
// date: 2022-07-13 13:28:43
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> adj[N], traverse;
vector<bool> vis(N, false);

void dfs(int vertex){
    vis[vertex] = true;
    traverse.push_back(vertex);
    for(auto x:adj[vertex]){
        if(!vis[x])
            dfs(x);
    }
}
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); */
    // start stitching.
    
    /*-------------------------------------------------
    Create Graph
    --------------------------------------------------*/
    cout<<"Input number of vertices and edges\n";
    int v, e;
    cin>>v>>e;
    for(int i=0; i<e; i++){
        cout<<"Input edge:" + to_string(i)+'\n';
        int v1, v2; 
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    
    /*-------------------------------------------------
    Initialize parameters
    --------------------------------------------------*/
    
    int source = 0;
    
    /*-------------------------------------------------
    Call DFS
    --------------------------------------------------*/
    
    dfs(source);
    
    /*-------------------------------------------------
    Show Result
    --------------------------------------------------*/
    for(auto x:traverse) cout<<x<< ' ';
    cout<<'\n';
}