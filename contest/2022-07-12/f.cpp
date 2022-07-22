// title: f.cpp
// date: 2022-07-14 20:20:09
#include<bits/stdc++.h>
using namespace std;
const int dx[] = {-1, 0, +1};
const int dy[] = {-1, 0, +1};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // start stitching.
    vector<int> a(4);
    a[1] = 3; 
    a[0] = 2; 
    a[2] = 5; 
    a[3] = 8; 
    a.pop_back();
    cout<<a.back();
}