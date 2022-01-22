//codechef
#include<bits/stdc++.h>
using namespace std;

int main ()
{
 
int t ;
cin>>t ;
while(t-- > 0){
    
    
    string s ;
    cin>>s ;
    
    int left = -1 ;
    int right = s.length() ; 
    
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '1'){
            left = i ;
            break;
        }
    }
    for(int i = s.length() - 1 ; i>= 0 ; i--){
         if(s[i] == '1'){
            right = i ;
            break;
        }
    }
   
    int count = 0 ; 
    for(int i = left ; i <= right ; i++){
        if(s[i] == '1') count++ ; 
    }
  if(left == -1  ) cout<<"NO"<<endl ; 
  else if( right-left+1 == count ) cout<<"YES"<<endl ;
  else cout<<"NO"<<endl ; 
    
    
    
}
  return 0;
}