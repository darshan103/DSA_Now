#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int curSum=0;
    int maxSum=0;
    cin>>n;
    int arr[n];
    int cumSum[n]={0};

    cin>>arr[0];
    cumSum[0]=arr[0];
    for(int i=1; i<n; i++){
        cin>>arr[i];
        cumSum[i]=cumSum[i-1]+arr[i];
    }

    // for generating all subarrays
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            curSum = cumSum[j]-cumSum[i-1];
            if(curSum>maxSum){
                maxSum = curSum;
            }
        }
       
    }

    cout<<"The maximum sum is : "<<maxSum<<endl;
    
    return 0;
}