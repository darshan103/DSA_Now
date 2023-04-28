#include <bits/stdc++.h>

using namespace std;

// sabse bada pehle, agr dono equal length ke hai toh lexigraphical order
bool compare(string s1,string s2){
    if(s1.length()==s2.length())
      return s1<s2;
    return s1.length()>s2.length();
}

int main(){
    int n;
    cin>>n;
    string str[1000];
    cin.get();

    for(auto i=0; i<n; i++){
        getline(cin,str[i]);
    }

    sort(str,str+n,compare);
    for(auto i=0; i<n; i++){
        cout<<str[i]<<endl;
    }
}