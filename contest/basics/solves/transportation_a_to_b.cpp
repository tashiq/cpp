// title: transportation_a_to_b.cpp
// date: 2022-07-14 11:23:35
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // start stitching.
    int a, b;
    cin>>a>>b;
    vector<int> ans;
    ans.push_back(b);
    while(b>a){
        if(b%10==1){
            b/=10;
        }
        else if(b%2){
            break;
        }
        else{
            b/=2;
        }
        ans.push_back(b);
    }
    if(b==a){
        cout<<"YES\n"<<ans.size()<<'\n';
        sort(ans.begin(), ans.end());
        for(auto x: ans) cout<<x<<' ';
    }
    else{
        cout<<"NO\n";
    }
}