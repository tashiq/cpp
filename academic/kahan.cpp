#include<bits/stdc++.h>
using namespace std;
double kahanSum(vector<double>&v){
    double sum = 0.0,  error = 0.0;
    for(double i:v){
        double y = i - error;
        double t = sum + y;
        error = (t - sum) - y;
        sum = t;
    }
    return sum;

}
double normal_sum(vector<double>&v){
    double sum = 0;
    for(double i: v){
        sum+= i;
    }
    return sum;
}
int main(){
    double x;
    vector<double> v(10+1);

    for(int i = 0; i<10; i++){

        v[i] = 0.1;
    }
    double d = kahanSum(v);
    double y = normal_sum(v);
    cout<<"Kahan Sum: "<<d<<endl;
    cout<<"Normal Sum: "<<x<<endl;
}
