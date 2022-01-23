

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int n ;
    cin>>n ;
    int arr[n] ;
    
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ;
    }
  
    
    int min = 1000;
    int max = 0 ; 
    int mini ; 
    int maxi;
    for( int i = 0 ; i < n ; i++ ){
        
        if( arr[i] > max ){ //imp
            max = arr[i];
            maxi = i ; 
        }
        if( arr[i] <= min ){ //imp equal condition
            min = arr[i] ;
            mini = i ; 
        }
        
    }
    
    if( mini < maxi ){
        cout<<(maxi-0+(n-1)-mini)-1;
    }else{
        cout<<(maxi-0+(n-1)-mini) ; 
    }
  
    return 0;
}
