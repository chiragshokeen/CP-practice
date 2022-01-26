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

int n,m ; 
cin>>n>>m ;

int a[m+1] ;
for( int i = 1 ; i<= m ; i++ ){
    cin>>a[i] ;
}
a[0]=1 ; 
ll dist = 0 ; 

for( int i = 0 ; i < m ; i++ ){
    if( a[i+1] < a[i] ){
        dist+=( (n-a[i]) + a[i+1]  ) ; 
    }else{
        dist+=( a[i+1] - a[i] ) ; 
    }
    
}
cout<<dist ; 
  
    return 0;
}