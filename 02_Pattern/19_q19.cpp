// implement
// 1	2	3	4	4	3	2	1	
// 1	2	3	*	*	3	2	1	
// 1	2	*	*	*	*	2	1	
// 1	*	*	*	*	*	*	1

#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   int i=1;
   
   while(i<=n){
       int j=1;
       while(j<=n-i+1){
           cout<<j<<"\t";
           j++;
       }
       
       int star=(i-1)*2;
       while(star){
           cout<<"*"<<"\t";
           star--;
       }
       
       int k=n-i+1;
       while(k){
           cout<<k<<"\t";
           k--;
       }
       
       i++;
       cout<<endl;
   }
}