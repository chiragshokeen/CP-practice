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
  double arr[n] ;
  for(int i = 0 ; i < n ; i++){
      cin>>arr[i] ;
      
  }
  
  sort(arr, arr + n);
  
  double max = 0.0 ; 
  double sum = 0.0 ; 
  
  for(int i = 0 ;  i < n ; i++){
      sum+=arr[i] ;
  }
  
 
  
 double sum1 = 0.0 ; 
 for(int i = 0 ; i < n-1 ; i++){
     sum1+=arr[i] ;
     sum-=arr[i] ;
     double d1 = sum1/(i+1) ;
     double d2 = sum/(n-i-1);
     if(d1+d2 > max){
         max = d1+d2 ; 
     }
 }
    cout<<fixed<<setprecision(6)<<max<<endl ; 
      
  }
    return 0;
}
