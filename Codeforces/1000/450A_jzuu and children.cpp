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

    int n , m ;
    cin>>n>>m ;
    int arr[n+1] ;
    for( int i = 1 ; i<= n ; i++ ){
        cin>>arr[i] ;
    }
    vector< pair <int,int> > vect;
    for(int i = 1 ; i<= n ; i++){
         vect.push_back( make_pair(arr[i],i) );
    }
    
    while(vect.size() > 1 ){
        
        if( vect[0].first<= m ){
            vect.erase( vect.begin() ) ;
        }else{
            vect.push_back( make_pair( vect[0].first-m , vect[0].second ) );
            vect.erase( vect.begin() ) ;
        }
        
        
    }
    
    cout<<vect[0].second ; 
    
 
    return 0;
}
