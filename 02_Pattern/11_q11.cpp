// implement
// A B C D 
// B C D E 
// C D E F 
// D E F G 

#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;

   int row=1;
   int col;
   while(row<=n){
       col=1;
       while(col<=n){
           char ch='A'+row+col-2;
           cout<<ch<<" ";
           col++;
       }
       
       cout<<endl;
       row++;
   }
}