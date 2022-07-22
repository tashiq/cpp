#include <bits/stdc++.h>
using namespace std;
int check(int a, int b){
    int c = 1;
    while(a<b){
        b/=10;
        c++;
    }
    if(b==a){
        return c;
    }
    else{
        return -1;
    }
}
void solve()
{
    int a, b, n;
    cin>>a>>b>>n;
    int c = 1;
    int counter = check(a, b);
    while(counter==-1 && b*c<=1e5){
        c++;
        counter = check(a, b*c);
    }
    if(counter==-1){
        cout<<-1;
    }
    else{
        string as = to_string(a);
        string bs = to_string(b*c);
        cout<<b*c;
        for(int i=0; i<n-bs.length()+as.length(); i++){
            cout<<0;
        }
    }
    cout<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}