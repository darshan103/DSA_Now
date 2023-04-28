// implement
// A 
// B C 
// C D E 
// D E F G

#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;

   int row=1;
   int col;
   int count=1;
   while(row<=n){
       col=1;
       count=row+col-2;
       while(col<=row){
           char ch='A'+count;
           cout<<ch<<" ";
           count++;
           col++;
       }
       
       cout<<endl;
       row++;
   }
}