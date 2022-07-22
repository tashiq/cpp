#include<bits/stdc++.h>
using namespace std;
int main(){
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int c=0, n=0;
        for(int i=0; i<4; i++){
            cin>>n;
            if(n==1){
                c++;
            }
        }
        if(c==4){
            cout<<2;
        }
        else if(c==0){
            cout<<0;
        }
        else{
            cout<<1;
        }
        cout<<endl;
    }
}
