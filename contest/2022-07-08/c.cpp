#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0; i<m; i++){
            int k;
            cin>>k;
            a[k-1]++;
        }
        for(int i=1; i<=m; i++){
            int max_task = 0;
            for(int j=0; j<n; j++){
                if(a[j]>=i) max_task+=i;
                else{
                    int space = i-a[j];
                    int task = (space)/2;
                    max_task+=a[j]+task;
                }
            }
            if(max_task>=m) {
                cout<<i<<endl;
                break;
            }
        }

    }
}
