#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1="Darshan";
    string s2="Singh";

    // Iterator in strings
    // method_01-for each loop
    for(auto ch:s1){
        cout<<ch<<",";
    }
    cout<<endl;

    // method_02-using iterator
    for(auto it=s2.begin(); it!=s2.end(); it++){
        cout<<(*it);
    }
    cout<<endl;

    // Comparision in strings
    // method-01
    if(s2>s1){
        cout<<"s1 is lexigraphically greator than s2"<<endl;
    }

    // method-02
    int comp = s2.compare(s1); 
    // give 0 if equals, give <0 or >0 if not equals
    cout<<comp<<endl;

}