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
        vector<int> a(n);
        for(int &x: a) cin>>x;
        for(int i=0; i<n; i++){
            int size;
            cin>>size;
            string s;
            cin>>s;
            for(int j=0; j<size; j++){
                if(s[j]=='U'){
                    if(a[i]==0) a[i] = 10; 
                    a[i]--;
                }
                else{
                    a[i] = (a[i]+1)%10;
                }
            }
        }
        for(int i:a) cout<<i<<' ';
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