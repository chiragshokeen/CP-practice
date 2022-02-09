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
  int t ;
  cin>>t ;
  while(t-- > 0){
      
      int n;cin>>n;

 map<int,int> m;

 for(int i=0;i<2*n;i++){
  int x;cin>>x;
  m[x]++;
 }

 bool f = true;

 for(int i=0;i<2*n;i++){
  if(m[i] == 1){
   f = false;
   break;
  }
  else if(m[i] == 0) break;
 }


 if(f) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

 
      
  }
    return 0;
}
