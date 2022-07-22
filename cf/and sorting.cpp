#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, ans = 0, k, f = 0;
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>k;
            if(f==0 && i!=k){
                ans = k;
                f = 1;
            }
            else if(i!=k){
                ans = ans&k;
            }
        }
        cout<<ans<<endl;
    }
}
