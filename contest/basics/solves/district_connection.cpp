// title: district_connection.cpp
// date: 2022-07-14 19:34:21
#include <bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};

void solve()
{
    int tt = 1;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        set<int> dis;
        for(int i=0; i<n; i++) {cin>>v[i];dis.insert(v[i]);}
        if(dis.size()==1) {cout<<"NO\n"; continue;}

        cout<<"YES\n";
        vector<int> no, yes;
        int k=1;
        for(int i=1; i<n; i++){
            if(v[i]!=v[i-1]){ cout<<k<<' '<<i+1<<'\n'; k=i+1; yes.push_back(i);}
            else{
                no.push_back(i);
            }
        }
        for(int i=0; i<no.size(); i++){
            if(v[no[i]] == v[yes[0]]){
                cout<<yes[1]<<' '<<no[i];
            }
            else{
                cout<<yes[0]<<' '<<no[i];
            }
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