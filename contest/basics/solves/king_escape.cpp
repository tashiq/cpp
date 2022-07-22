// title: king_escape.cpp
// date: 2022-07-14 16:23:40
#include<bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};
map<pair<int, int>, bool> vis;
void dfs(int i, int j, int fx, int fy, int n){
    if(vis[{i,j}] || i>n || j>n) return;
    //cout<<'c';
    vis[{i,j}] = true;


    for(auto x: dx){
        for(auto y:dy){
            if(!y && !x){
                continue;
            }
            if(i+x>0 && j+y>0 && i+x<=n && j+y<=n && !vis[{i+x, j+y}] && abs(i+x - fx)!=abs(j+y-fy) && fx!=(i+x) && fy!=(j+y)){
                //cout<<i+x<<' '<<j+y<<'\n';
                dfs(i+x, j+y, fx, fy, n); 
            }
            
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // start stitching.
    int n, m;
    cin>>n;
    int fx, fy;
    cin>>fx>>fy;
    int ax, ay;
    cin>>ax>>ay;
    int bx, by;
    cin>>bx>>by;
    dfs(ax, ay, fx, fy, n);
    
    vis[{bx,by}]? cout<<"YES\n": cout<<"NO\n";
    
}