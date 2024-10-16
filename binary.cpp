#include<iostream>
using namespace std;

         //Decimals to binary from 2 to 10 numbers
/* int decToBinary(int decNum)
   {  
     int ans = 0 , pow = 1;
     while(decNum > 0){
        int rem = decNum % 2 ;
        decNum /= 2 ;
        ans += (rem * pow);
        pow*=10;
     }
    return ans;
   }   
   int main(){
    int n = 10 ;
    for(int i = 1 ; i <=n ; i++){
        cout<<decToBinary(i)<<endl;
    }
    return 0;
   } */
               //binary to decimals
  int bintoDecimal(int binNum)
   {  
     int ans = 0 , pow = 1;
     while(binNum > 0){
        int rem = binNum % 2 ;
        binNum /= 10 ;
        ans += (rem * pow);
        pow*=2;
     }
    return ans;
   }      
    int main(){
     cout<<bintoDecimal(10110)<<endl;
    return 0;    }      