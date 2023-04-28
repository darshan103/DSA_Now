#include <bits/stdc++.h>

using namespace std;

int linearSearch(vector<int>&arr, int n, int key){
    for(int i=0; i<n; i++){
        int temp = arr[i];
        if(key==temp){
            return i;
        }
    }
    return -1;
}

int main() {
    int n,key;
    cin>>n>>key;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=linearSearch(arr,n,key);
    cout<<ans;
}