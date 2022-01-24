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
   cin>>n ;
   
   int a[8] ;
   for(int i = 1 ; i <= 7 ; i++){
       cin>>a[i] ;
   }
   int ans ;
   for(int i = 1 ; i <= 7 ; i++){
       n=n-a[i] ;
       if(n<=0){
           ans = i ; 
           break;
       }
       i = i%7 ; 
   }
   
   cout<<ans ; 
 
    return 0;
}
