#include <iostream>
using namespace std;

void reverse(int arr[], int i, int j)
{
    while (i <= j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

void rotateArray(int arr[], int st, int k, int end){
    int div=end-k;
    reverse(arr,st,div);
    reverse(arr,div+1,end);
    reverse(arr,st,end);
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int left=0;
    int right=n-1;

    rotateArray(arr,left,k,right);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}