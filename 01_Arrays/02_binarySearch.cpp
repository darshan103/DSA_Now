#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>&arr, int n, int key){
    int st=0,end=n-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(key==arr[mid]){
            return mid;
        }else if(key<arr[mid]){
            end = mid-1;
        }else if(key>arr[mid]){
            st = mid+1;
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
    int ans=binarySearch(arr,n,key);
    cout<<ans<<endl;
}