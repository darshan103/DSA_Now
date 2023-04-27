// implement
// D 
// C D 
// B C D 
// A B C D

#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;

   int row=1;
   int col;
   while(row<=n){
       col=1;
       while(col<=row){
           char ch='A'+n+col-row-1;
           cout<<ch<<" ";
           col++;
       }
       
       cout<<endl;
       row++;
   }
}