#include <bits/stdc++.h>
using namespace std;


// method 1
int main(){
    char a[1000];
    cin>>a;
    int n=strlen(a);
    string str="";

    if(n==0||n==1){
        return 'a';
    }

    for(int i=0; i<n; i++){
        int j=i+1;
        if(a[i]!=a[j]){
            str+=a[i];
            j=j+1;
        }
        else{
            j++;
        }
    }
    cout<<str;
}

// method 2
// void removeDuplicate(char str[]){
//     int n=strlen(str);
//     if(n==0||n==1){
//         return;
//     }
//     int j=0;
//     int i=j+1;

//     while(i<n){
//         if(str[j]!=str[i]){
//             j++;
//             str[j]=str[i];
//         }else{
//             i++;
//         }
//     }
    
//     str[j+1]='\0';
// }
// int main(){
//     char str[1000];
//     cin>>str;
    
//     removeDuplicate(str);
//     cout<<str;
// }