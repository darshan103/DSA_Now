#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[1000];
    char maxi[1000];
    
    // a ke ander sabse pehle ye hoga [3 /n hello /n coding /n learner /n]
    // 3 /n ko hatane ke liye hum pehle hi cin.get ka use kar lenge jis se woh hello pe chala jaega
    cin.get();
    
    int len=0;
    int max_len=0;
    for(int i=0; i<n; i++){
        cin.getline(a,100);
        // cout<<a<<endl;
        len=strlen(a);
        if(len>max_len){
            max_len=len;
            strcpy(maxi,a);
        }
    }
    
    cout<<maxi<<" "<<max_len<<endl;
    
}
