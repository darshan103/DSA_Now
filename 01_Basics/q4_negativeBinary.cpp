#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin>>n;
    n=n*-1;
    while(n!=0){
        v.push_back(n%2);
        n=n/2;
    }
    reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        if(v[i]==0)
          v[i]=1;
        else
          v[i]=0;
    }
    
    v[v.size()-1]+=1;
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
}