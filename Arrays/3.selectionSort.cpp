#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int min_idx=i;
        for(int j=i; j<n; j++){
            if(arr[i]>arr[j]){
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}