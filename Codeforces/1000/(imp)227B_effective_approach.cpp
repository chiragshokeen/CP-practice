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
 
 int index[n+1] ;
 int a ; 
for(int i = 1 ; i <= n ; i++){
    cin>>a ;
    index[a] = i ;
}


ll vasya = 0 ;
ll pesya = 0 ; 
int m ; 
cin>>m ; 
for( int i = 0 ; i<m  ;i++ ){
    int b ;
    cin>>b ;
    vasya+= index[b] ; 
    pesya+= (n + 1 - index[b]);
}

cout<<vasya<<" "<<pesya<<endl ; 
 
 
    return 0;
}
