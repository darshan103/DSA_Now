#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int ans=0;
    int i=0;
    while(n!=0){
        // & operator humesha binary number pe hi kaam karta h
        // n ka binary 101 h,
        int bit = n&1;
        ans=(bit*pow(10,i))+ans;
        // 101 ko ek baar right shift karne pe 10 milega
        // phir 10 ko right shift karne pe 1 milega
        n=n>>1;
        i++;
    }
    
    cout<<"answer is "<<ans<<endl;
}