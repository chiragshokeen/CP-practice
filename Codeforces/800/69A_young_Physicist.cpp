#include <bits/stdc++.h>

using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++) 

int main()
{
  int n ;
  cin>>n ;
  int x , y , z ; 
  int sumx = 0 , sumy = 0 , sumz = 0 ; 
  for( int i = 0 ; i < n ; i++ ){
      
      cin>>x>>y>>z ;
      sumx+=x ;
      sumy+=y ;
      sumz+=z ;
      
      
      
      
  }
  cout<<sumx<<sumy<<sumz ;
  if(sumx== 0 && sumy == 0 && sumz == 0) cout<<"YES" ;
  else cout<<"NO" ;
  

    return 0;
}