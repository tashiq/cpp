// title: fall_down.cpp
// date: 2022-07-14 11:57:05
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n, m;
        cin>>n>>m;
        string s[n+1];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        for(int i=0; i<n-1; i++){
            for(int j=0; j<m; j++){
                if(s[i][j]=='*'){
                    int k = i, last_e = -1;
                    while(k<n && s[k][j]!='o'){
                        if(s[k][j] == '.'){
                            last_e = k;
                        }
                        k++;
                    }
                    if(last_e!=-1){
                        s[last_e][j] = '*';
                        s[i][j] = '.';
                    }
                }
            }
        }
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++) cout<<s[i][j];
            cout<<'\n';
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