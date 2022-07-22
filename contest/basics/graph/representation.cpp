#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
int adj[N][N];
vector<int> adjList[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // start stitching.

/*-------------------------------------------------
Matrix: graph representation 
--------------------------------------------------*/

    int v, e;
    cin>>v>>e;
    memset(adj, 0, sizeof adj);
    int a, b, wt;
    for(int i=0; i<e; i++){
        // without weight
        cin>>a>>b; 
        adj[a][b] = 1;
        adj[b][a] = 1; // Undirected graph.
        // with weight
        /* cin>>a>>b>>wt;
        adj[a][b] = wt;
        adj[b][a] = wt; */
        
    }
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++) 
            cout<<adj[i][j];
        cout<<'\n';
    }
    
/*-------------------------------------------------
List: Graph Representation
--------------------------------------------------*/
    
    int v2, e2;
    int a, b;
    cin>>v2>>e2;
    
    for(int i=0; i<e2; i++){
        cin>>a>>b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    for(int i=0; i<v2; i++){
        for(int x: adjList[i]) cout<<x<<' ';
        cout<<'\n';
    }
}