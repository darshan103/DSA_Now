// implement
// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   int i=1;
   
   while(i<=n){
       int j=1;
       int space=i-1;
       while(j<=space){
           cout<<" ";
           j++;
       }
       
       int star=n-i+1;
       while(star){
           cout<<i;
           star--;
       }
       
       cout<<endl;
       i++;
   }
}