#include <stdio.h>
#include<bits/stdc++.h>
using namespace std ;

#define  py  cout<<"YES"
#define  pn cout<<"NO" 
#define ll long long
#define fo(i, n) for(i=0;i<n;i++)
#define sot(v) sort(v.begin() , v.end()) 
#define rev(v) reverse(v.begin() , v.end())

int main()
{

   int n ; 
   cin>> n ;
   int a[n] ;
   int b[n] ;
   int i ;
   fo(i,n){
       cin>>a[i]>>b[i] ;
        
   }
   
   int ans = 0 ; 
   for( int i = 0 ; i < n ; i++ ){
       
       int x = a[i] ;
       int y = b[i] ; 
       bool right = false , left = false , up = false , down = false;
       for( int j = 0 ; j < n ; j++ ){
           
           if( a[j] > x && b[j] == y  ){
               right = true ; 
           }
           if( a[j] < x && b[j] == y ){
               left = true ;
           }
           
           if( b[j] > y && a[j] == x ){
               up = true ;
           }
           
           if( b[j] < y && a[j] == x ){
               down = true ; 
           }
           
         
           
       }
         if( right && left && up && down ){
               ans++ ; 
           }
           
   }
   
   cout<<ans ; 
 
    return 0;
}
