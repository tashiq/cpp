#include<bits/stdc++.h>
using namespace std;
#define inf INFINITY
bool wordgame(){
    int n;
    cin>>n;
    int p = 0;
    string a, b;
    cin>>a>>b;
    int n1 = a.length(), n2 = b.length();
    int x[26] , y[26];
    for(int i=0; i<26; i++){
        x[i] = 0;
        y[i] = 0;
    }

    if(n1<n2){
        return false;
    }
    for(int i=0; i<a.length(); i++){
        x[a[i] - 'a']++;
    }
    for(int i=0; i<b.length(); i++){
        y[b[i] - 'a']++;
    }

//    for(int i=0; i<26; i++){
//        cout<<x[i]<<' '<<y[i]<<endl;
//    }


    for(int i = 0; i<26; i++){
        if(y[i]>x[i])
            p+=y[i] - x[i];
    }
    return p<=n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        if(wordgame()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

//        long long sum = 0;
//        vector<long long> a(n);
//        for(int i=0; i<n; i++){
//            cin>>a[i];
//            sum+=a[i];
//        }
//        long long x = ceil(sum/float(n));
//        long long y = floor(sum/float(n));
//        long long sum2=0, sum3=0;
//        for(int i=0; i<n; i++){
//            sum2+=abs(x-a[i]);
//            sum3+=abs(y-a[i]);
//        }
//        cout<<min(sum2, sum3)<<endl;
    }
}
