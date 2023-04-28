#include<bits/stdc++.h>
using namespace std;

void pairSum(int arr[],int n,int key){
    int i=0;
    int j=n-1;
    while(i<j){
        int currSum=arr[i]+arr[j];
        if(currSum>key){
            j--;
        }else if(currSum<key){
            i++;
        }else if(currSum==key){
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j--;
        }
    }
}

int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    pairSum(arr,n,key);
    
    return 0;
}