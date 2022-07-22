#include<bits/stdc++.h>
using namespace std;
void merging(int *a, int f, int l, int mid){
    int n1 = mid - f + 1;
    int n2 = l - mid;
    int left[n1+1], right[n2+1];
    for(int i=0; i<n1; i++){
        left[i] = a[f+i];
    }
    for(int i=0; i<n2; i++){
        right[i] = a[mid+i+1];
    }
    int i=0, j=0;
    left[n1] = INT_MAX;
    right[n2] = INT_MAX;
    for(int k=f; k<=l; k++){
        if(left[i]<right[j]){
            a[k] = left[i];
            i++;
        }
        else{
            a[k] = right[j];
            j++;
        }
     }
}
void mergesort(int *a, int l, int r){
    if(l<r){
        int mid = (r+l)/2;
        mergesort(a, l, mid);
        mergesort(a, mid+1, r);
        merging(a, l, r, mid);
    }
}
int main(){
    int a[] = { 4,31,123,1,23,123,5};
    int n = sizeof(a)/sizeof(a[0]);
    mergesort(a, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }
}
