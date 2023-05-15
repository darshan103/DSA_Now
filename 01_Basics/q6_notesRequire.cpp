#include<bits/stdc++.h>
using namespace std;

int main(){
    int tA,n1=0,n20=0,n50=0,n100=0;
    cin>>tA;
    cout<<"Enter total amount : "<<tA<<endl;
    
    switch(tA>=100){
        case 1: n100=tA/100;
                tA=tA-n100*100;
        break;
    }
    switch(tA>=50){
        case 1: n50=tA/50;
                tA=tA-n50*50;
        break;
    }
    switch(tA>=20){
        case 1: n20=tA/20;
                tA=tA-n20*20;
        break;
    }
    switch(tA>=1){
        case 1: n1=tA/1;
                tA=tA-n1*1;
        break;
    }
    
    cout<<"the 100Rs notes requires are : "<<n100<<endl;
    cout<<"the 50Rs notes requires are : "<<n50<<endl;
    cout<<"the 20Rs notes requires are : "<<n20<<endl;
    cout<<"the 1Rs notes requires are : "<<n1<<endl;
}