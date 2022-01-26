#include <stdio.h>
#include<bits/stdc++.h>
using namespace std ;

#define  py  cout<<"YES"
#define  pn cout<<"NO" 
#define ll long long
#define fo(i, n) for(int i=0;i<n;i++)
#define sot(v) sort(v.begin() , v.end()) 
#define rev(v) reverse(v.begin() , v.end())

int main()
{
 int n ;
 cin>>n ;
 int arr[n+1] ;
 for(int i=1 ; i <= n ;i++){
     cin>>arr[i] ;
 }
 
 int min = INT_MAX ;
 int minx ;
 int miny ; 
 
 for(int i = 1 ; i < n ; i++){
     
     if( abs( arr[i]-arr[i+1] ) < min ){
         min = abs(arr[i] - arr[i+1]) ;
         minx = i ;
         miny = i+1 ; 
     }
     
 }
 
 if( abs(arr[1] - arr[n]) < min ){
     cout<<n<<" "<<"1" ;
 }else{
     cout<<minx<<" "<<miny ; 
 }
  
    return 0;
}
