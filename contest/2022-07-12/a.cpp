#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i]>='a'&&s[i]<='z') s[i]-=abs('a'-'A');
        }
        if(s=="YES") cout<<"YES";
        else cout<<"NO";
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