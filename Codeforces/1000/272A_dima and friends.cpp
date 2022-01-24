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
    double sum = 0 ;
    int i ;
    fo(i,n){
        int b ;
        cin>>b ;
        sum+=b ; 
    }
    
    int ans = 0 ; 
    for(int k = 1 ; k<= 5 ; k++){
        double a = (sum+k-1)/(n+1) ;
     
        int b = (sum+k-1)/(n+1) ; 
        
        if(  (a-b) > 0  ){
            ans++ ; 
        }
    }
 
    cout<<ans<<endl ; 
 
    return 0;
}

// if( (sum+k)% (n+1) != 1 ){
//     ans++ ; 
// }