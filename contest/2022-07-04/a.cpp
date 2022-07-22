#include<bits/stdc++.h>
using namespace std;


int main(){

    // fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            cout<<-1;
        }
        else{
            cout<<n/2<<' '<<n/2<<' '<<0;
        }
        cout<<endl;

    }
}
