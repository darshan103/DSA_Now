#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1; i<n; i++){
        // currEle me arr[i] ko store karaenge
        int currEle = arr[i];
        int j = i-1;
        // agr arr[j] bada h toh arr[j+1] me currEle daal denge
        while(j>=0 && arr[j]>currEle){
            arr[j+1]=arr[j];
            // or arr[j] me currEle bhej denge jab j>=0 rahega
            arr[j]=currEle;
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}