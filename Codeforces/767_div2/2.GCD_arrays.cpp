

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std ;

#define  py  cout<<"YES"
#define  pn cout<<"NO" 
#define ll long long

int main()
{
  int t ;
  cin>>t ;
  while(t-- > 0){
  ll l , r , k ;
  
  cin>>l>>r>>k ;
  

  
  if( l  == r){
      
      if( l > 1 ){
          py<<endl ;
      }else{
          pn<<endl;
      }
      
  }else{
      
        ll even = (r-l+1)/2 ;
        ll odd =  (r-l+1)/2 ; 
        
        if( l % 2 == r % 2 ){
            if( r% 2 == 1 )odd++ ;
            else even++ ; 
        }
        
        if(k >= odd){
            py<<endl ; 
        }else{
            pn<<endl ; 
        }
      
  }
  
  
  }
    return 0;
}
