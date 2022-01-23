#include <stdio.h>
#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int n ;
    cin>> n ;
    int left[n] ;
    int right[n] ; 
    
    int countl0=0 ;
    int countl1=0 ;
    int countr0=0 ;
    int countr1=0 ;
    for( int i = 0 ; i < n ; i++ ){
        
        int a,b ;
        cin>>a ;
        cin>>b ;
        
        if( a == 0 ) countl0++;
        else countl1++ ;
        
        if(b == 0) countr0++;
        else countr1++ ; 
        
        
    }
    
    cout<<(n-max( countl0 , countl1 ) )+ (n-max(countr0 , countr1)) ; 
    
    return 0;
}