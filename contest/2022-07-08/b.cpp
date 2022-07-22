#include<bits/stdc++.h>
using namespace std;
int main(){
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2<<endl;
        for(int i=1; i<=n; i+=2){
            for(int j=i; j<=n; j*=2){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
