// implement
// A B C D 
// A B C D 
// A B C D 
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
       while(col<=n){
           char ch='A'+col-1;
           cout<<ch<<" ";
           col++;
       }
       
       cout<<endl;
       row++;
   }
}