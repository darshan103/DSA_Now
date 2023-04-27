// implement
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 

#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;

   int row=1;
   int col;
   while(row<=n){
       col=row;
       while(col>=1){
           cout<<col<<" ";
           col--;
       }
       
       cout<<endl;
       row++;
   }
}