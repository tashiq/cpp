#include<bits/stdc++.h>
using namespace std;

int partition(int *a, int l, int r){
    int pivot = a[r], smallest = l;
    for(int i = l; i<r; i++){
        if(a[i]<pivot){
            swap(a[i], a[smallest]);
            smallest++;
        }
    }
    swap(a[smallest], a[r]);
    return smallest;
}

void quicksort(int *a, int l, int r){
    if(l<r){
        int cor = partition(a, l, r);
        quicksort(a, l, cor-1);
        quicksort(a, cor+1, r);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        a[i] = rand();
    }
    quicksort(a, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }
}
