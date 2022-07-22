#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    long long abc = 1000000000000000000;
    while(t--){
        int n;
        long long x;
        cin>>n;
        set<long long> a;
        for(int i=0; i<n; i++){
            cin>>x;
            a.insert(x);
        }
        set<long long>::iterator it = a.end();
        it--;
        for( ; ;it--){
            if((*it)<abc){
                break;
            }
            abc--;
            if(it==a.begin())
                break;
        }
        cout<<abc<<endl;
    }

}
