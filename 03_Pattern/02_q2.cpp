/* implement
   3 2 1 
   3 2 1 
   3 2 1 */

#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;

   int i=1;
   int j;
   while(i<=n){
       j=n;
       while(j>=1){
           cout<<j<<" ";
           j--;
       }
       cout<<endl;
       i++;
   }
}