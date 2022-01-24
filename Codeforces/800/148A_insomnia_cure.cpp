#include <stdio.h>
#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int k , l , m , n , d ;
    
    cin>>k>>l>>m>>n>>d ;
    
    int count = 0 ; 
    
    if( k  == 1 || l == 1 || m == 1|| n == 1 ){
        cout<<d ;
    }else{
        int num = 1 ;
        while(num <= d){
            if( num % k  != 0 && num % l  != 0 && num % m  != 0 && num % n  != 0  ){
                count++ ; 
                
            }
            num++ ; 
        }
        
        
         cout<<d-count;
    }
   
  
    return 0;
}
