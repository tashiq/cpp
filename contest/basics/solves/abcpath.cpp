// title: abcpath.cpp
// date: 2022-07-14 22:36:15
#include<bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};

const int N = 100;
int counter = 0;
bool mem[N][N];
vector<string> s(N);

void dfs_visit(int i, int j, int r, int c, char cur){
    if(cur>'Z') return;
    mem[i][j] = true;
    for(int x:dx){
        for(int y:dy){
            char ch = (char) cur+1;
            if(i+x>=0 && i+x<r && j+y>=0 && j+y<c && s[i+x][j+y]==ch && !mem[i+x][i+y]){
                //cout<<s[i+x][j+y]<<'\n';
                counter = ch - 'A' + 1;
                dfs_visit(i+x, j+y, r, c, cur+1);
            }
        }
    }
}

int dfs(int n, int m){
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j]=='A'){
                counter = 0;
                dfs_visit(i, j, n, m, 'A');
                ans = max(ans, counter);
            }
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // start stitching.
    int a, b, c = 1;
    while(cin>>a>>b&&a&&b){
        memset(mem, 0, sizeof mem);
        for(int i=0; i<a; i++){
            cin>>s[i];
        }
        cout<<"Case "+to_string(c)+": ";
        cout<<dfs(a, b)<<'\n';
    }
}