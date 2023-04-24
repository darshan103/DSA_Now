#include<bits/stdc++.h>
using namespace std;

// ye sort ke ander if(arr[j]>arr[j+1]) jesi condition ko check karega
bool compare(int a, int b){
    // is condition me reverse array print hoga 
    return a>b;
    
    // is condition me seedha array print hoga
    // return a<b;
}

void inbuiltSort(int arr[],int n){
   // function name pass as a parameter to achieve reverse sorting
   sort(arr,arr+n,compare);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    inbuiltSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}