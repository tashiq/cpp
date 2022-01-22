#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0, j=0, n=6;
    cin>>n;
    for(i=1; i<n; i++){
        for(j=n-i-1; j>0; j--){
            cout<<" ";
        }
        for(j=0; j<(i+1)*2; j++){
            cout<<"I";
        }
        for(j=(n-i)*2-1; j>0; j--){
            cout<<" ";
        }
        for(j=0; j<(i+1)*2; j++){
            cout<<"U";
        }
        cout<<endl;
    }
    for(i=0; i<2*n+1; i++){
        for(j=i; j>0; j--){
            cout<<" ";
        }
        for(j=0; j<=4*n-2*(i+1)+2; j++)
            cout<<'\3';
        cout<<endl;
    }

}
