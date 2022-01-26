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
 int x,y,z ;
 cin>>x>>y>>z ;
 
 double a,b,c ;
 
 a = sqrt( x*y /z ) ;
 b = sqrt( x*z/y );
 c=  sqrt( y*z/x ) ;
 cout<<(int)4*(a+b+c) ; 
  
    return 0;
}
