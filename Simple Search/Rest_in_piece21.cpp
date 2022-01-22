//hackerearth
#include<bits/stdc++.h>

using namespace std;

int main ()
{
 
int t ;
cin>>t ;
while(t-- > 0){
    
    string s ; 
    cin>>s ;
    string s2 = "21" ; 
    int a = stoi(s);
    if(a % 21 == 0){
        cout<<"The streak is broken!"<<endl;
    }
    else if( s.find(s2) != std::string::npos ){
        cout<<"The streak is broken!"<<endl ;
    }else{
        cout<<"The streak lives still in our heart!"<<endl;
    }
}
  return 0;
}