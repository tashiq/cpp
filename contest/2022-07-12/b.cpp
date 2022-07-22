#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
       string s;
       int n;
       cin>>n>>s;
       int a[26], ans = 0;
       memset(a, 0, sizeof a);
       
       for(int i=0; i<s.length(); i++){
            if(a[s[i]-'A']==0){
                ans+=2;
                a[s[i]-'A'] = 1;
            }
            else{
                ans++;
            }
            
       } 
       cout<<ans<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}