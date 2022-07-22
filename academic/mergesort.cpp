#include<bits/stdc++.h>
using namespace std;

void merger(int *a, int f, int mid, int l){
    int inf = 9999999;
    int n1 = mid - f + 1;
    int n2 = l - mid;
    int x[n1+1], y[n2+1];
    for(int i=0; i<n1; i++){
        x[i] = a[f+i];
        //cout<<x[i]<<' ';
    }
    for(int i=0; i<n2; i++){
        y[i] = a[i+mid+1];
        //cout<<y[i]<<' ';
    }
    int i=0, j=0, k = f;
    while(i<n1 && j<n2){
        if(x[i]>y[j]){
            a[k] = y[j];
            j++;
        }
        else{
            a[k] = x[i];
            i++;
        }
        k++;
    }
    while(i<n1){
        a[k] = x[i];
        k++;
        i++;
    }
    while(j<n2){
        a[k] = y[j];
        j++;
        k++;
    }
}
void merge_sort(int *a, int f, int l){
    if(f<l){
        int mid = (f+l)/2;
        merge_sort(a, f, mid);
        merge_sort(a, mid+1, l);
        merger(a, f, mid, l);
    }
}
int main(){
    int a[5] = {5,6,3,2,1};
     for(int i=0; i<5; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    merge_sort(a, 0, 4);
    for(int i=0; i<5; i++){
        cout<<a[i]<<' ';
    }
}
