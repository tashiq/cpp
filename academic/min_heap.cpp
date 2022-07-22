#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<double, vector<double>, greater<double> > pq;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        double x;
        cin>>x;
        pq.push(x);
    }
    double a, b;
    do{
        a = pq.top();
        pq.pop();
        if(pq.empty()){
            break;
        }
        b =pq.top();
        pq.pop();
        pq.push(a+b);

    }while(!pq.empty());
    cout<<fixed<<setprecision(10)<<a;
}
