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
      
      int n ; 
      cin>> n ;
      
      ll max = INT_MIN ; 
      ll min = INT_MAX ; 
      ll arr[n] ;
      for(int i = 0 ; i < n ; i++){
          cin>>arr[i] ;
          if( arr[i]>=max ){
              max = arr[i] ;
          }
          if( arr[i] <= min ){
              min = arr[i] ;
          }
          
      }
      
      cout<<max-min<<endl ; 
      
  }
    return 0;
}
