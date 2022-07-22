#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, k;
        cin>>n>>k;
        int c=0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i>1&&a[i-1]>a[i]+a[i-2]) c++;
        }

        if(k==1) c = (n-1)/2;
        cout<<c<<'\n';
    }
}
