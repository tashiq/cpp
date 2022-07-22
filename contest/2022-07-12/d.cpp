#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<string> s(n);
        map<string, int> mp;
        for(int i=0; i<n; i++){
             cin>>s[i];
             mp[s[i]] = 1;
        }
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            bool check = false;
            for(int j = 1; j<s[i].length(); j++){
                string s1 = s[i].substr(0, j), s2 = s[i].substr(j, s[i].length()-j);
                if(mp[s1]&&mp[s2]){
                    ans[i] = 1;
                    check  = true;
                    break;
                }
                
            }
            if(!check) ans[i] = 0;
        }

        for(int i=0; i<n; i++) cout<<ans[i];
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