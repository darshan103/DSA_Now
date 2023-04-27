// implement
// 			1	
// 		1	2	1	
// 	1	2	3	1	2	
// 1	2	3	4	1	2	3

#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;
   int i=1;
   
   while(i<=n){
       int space=n-i;
       while(space){
           cout<<"\t";
           space--;
       }
       
       int j=1;
       while(j<=i){
           cout<<j<<"\t";
           j++;
       }
       
       int k=1;
       while(k<=i-1){
           cout<<k<<"\t";
           k++;
       }
       
       i++;
       cout<<endl;
   }
}