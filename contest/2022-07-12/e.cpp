#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int tt = 1;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<string> s(n);
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        long long ans = 0;
        for(int i=0; i<n; i++){
            int ones = 0;
            for(int j=0; j<n; j++){
                int m1, m2, m3, m4;
                m1 = s[i][j] - '0';
                m2 = s[j][n-i-1] - '0';
                m3 = s[n-i-1][n-j-1] - '0';
                m4 = s[n-j-1][i] - '0';
                ones = m1 + m2 + m3 + m4;
                ans += (ones>2)? 4-ones: ones;
            }
        }
        cout<<ans/4<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}