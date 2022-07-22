#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n, k;
        cin>>n>>k;
        unordered_map<int, int> first, last;
        vector<int> x(n);
        for(int i=0; i<n; i++){
            cin>>x[i];
            last[x[i]] = i+1;
            if(!first[x[i]]) first[x[i]] = i+1;
        }
        int a, b;
        for(int i=0; i<k; i++){
            cin>>a>>b;
            if(first[a]&&first[a] < last[b]) cout<<"YES\n";
            else cout<<"NO\n";
        }


    }
}
