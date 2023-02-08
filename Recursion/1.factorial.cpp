#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int ans = factorial(n-1);
    int myans = n*ans;
    return myans;
}

int main() {
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans;
}