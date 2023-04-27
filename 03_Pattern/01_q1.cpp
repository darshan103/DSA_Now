/* implement
   1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4 */

#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;
//   method-01
//   for(int i=1; i<=n; i++){
//       for(int j=1; j<=n; j++){
//           cout<<j<<" ";
//       }
//       cout<<endl;
//   }

// method-02
   int i=1;
   int j;
   while(i<=n){
       j=1;
       while(j<=n){
           cout<<j<<" ";
           j++;
       }
       cout<<endl;
       i++;
   }
}