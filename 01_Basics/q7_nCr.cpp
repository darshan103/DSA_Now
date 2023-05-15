#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num==0){
        return 1;
    }
    int ans=1;
    while(num>=1){
        ans=ans*num;
        num--;
    }
    return ans;
}

int nCr(int n, int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}

int main(){
    int n,r;
    cin>>n>>r;
    int ans=nCr(n,r);
    cout<<ans;
}

