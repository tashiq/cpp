#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int res = a*b>c*d ? a*b : c*d; 
    cout<<res;
}