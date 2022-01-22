//hackerearth
#include<bits/stdc++.h>
using namespace std;

int main ()
{
 
int t ;
cin>>t ;
while(t-- >0 ){
    
   string s ;
    cin>>s ;
    int su = 0 ,sj = 0 ;
    
    for( int i = 0 ; s[i] ; i++ ){
        
        
        
        if(s[i] == 'S'){
            
            
            if(s[i+1] == 'U' && s[i+2] == 'V' && s[i+3] == 'O' && s[i+4] == 'J' && s[i+5] == 'I' && s[i+6] == 'T'  ){
                sj++ ; 
            }
            
           else if(s[i+1] == 'U' && s[i+2] == 'V' && s[i+3] == 'O'  ){
               su++ ; 
           }
            
            
        }
        
        
        
        
        
    }
    
    
    
    cout<<"SUVO "<<su<<" SUVOJIT "<<sj ; 
    
    
}
  return 0;
}
