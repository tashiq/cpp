#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int m,n,res;
        cin>>m>>n;
        if(m==1 || n==1){
            m = max(m, n);
            res = m-1;
        }
        else{
            res = ceil(m*n/2.0);
        }
        cout<< "Case "<<i<<": "<<res<<'\n';
    }
}
