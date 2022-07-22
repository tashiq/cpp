#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin>>n>>t;
    vector<int> a(n+1);
    for(int i=1; i<n; i++){
        cin>>a[i];
        a[i]+=(i);
    }
    int cur = 1;
    while(a[cur] !=t && cur<n){
        cur = a[cur];
    }
    if(cur<=n&&a[cur]==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<'\n';
}
