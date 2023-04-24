#include <bits/stdc++.h>

using namespace std;

// int smallestInt(vector<int>&arr, int n){
//     int temp = INT_MAX;
//     for(int i=0; i<n; i++){
//         if(temp>arr[i]){
//             temp=arr[i];
//         }
//     }
//     return temp;
// }

int greatestInt(vector<int>&arr, int n){
    int temp = INT_MIN;
    for(int i=0; i<n; i++){
        if(temp<arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int ans=smallestInt(arr,n);
    // cout<<ans<<endl;
    int Ans=greatestInt(arr,n);
    cout<<Ans;
}