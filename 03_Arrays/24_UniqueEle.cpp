// find unique element in the array

#include <bits/stdc++.h>
using namespace std;

int uniqueEle(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }
    return ans;
}

// void printArr(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int ans=uniqueEle(arr,n);
    cout<<ans;
    
}