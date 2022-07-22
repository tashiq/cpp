#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;

        int mid = ceil(n/2.0)-1;
        vector<int> a(n), m(mid+1), l(n-mid-1);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        for(int i=0; i<=mid; i++){
            m[i] = a[i];
        }
        for(int i=mid+1; i<n; i++){
            l[mid - i - 1] = a[i];
        }
        int ml = 1;
        for(int i=0; i<n; i++){
            int x = (int) (i)/2;
            if(ml){
                ml = 0;
                a[i] = m[x];
            }
            else{
                ml = 1;
                a[i] = l[x];
            }
            cout<<a[i]<<' '<<x<<endl;
        }
        if(a[0]!=a[n-1]&&a[1]!=a[0]&&a[n-1]!=a[n-2]){
            cout<<"YES\n";
            for(int i=0; i<n; i++){
                cout<<a[i]<< ' ';
            }
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
}
