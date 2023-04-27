// implement
// A 
// B C 
// D E F 
// G H I J

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
       while(col<=row){
           char ch='A'+count-1;
           cout<<ch<<" ";
           count++;
           col++;
       }
       
       cout<<endl;
       row++;
   }
}