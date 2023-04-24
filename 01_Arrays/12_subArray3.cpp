#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,maxSum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum<0)
          sum=0;
        maxSum=max(maxSum,sum);
    }

    cout<<"The maxSum is : "<<maxSum;
    
    return 0;
}