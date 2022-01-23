#include <stdio.h>
#include<bits/stdc++.h>
using namespace std ;

#define  py  cout<<"YES"
#define  pn cout<<"NO" 
#define ll long long

void solveTest(){
     int a, b, c;
    cin >> a >> b >> c;

    int new_a = b - (c - b);
    if(new_a >= a && new_a % a == 0 && new_a != 0) {
        py<<endl;
        return;
    }

    int new_b = a + (c - a)/2;
    if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0) {
        py<<endl;
        return;
    }

    int new_c = a + 2*(b - a);
    if(new_c >= c && new_c % c == 0 && new_c != 0) {
        py<<endl;
        return;
    }

    pn<<endl;
    return;
}


int main()
{
  int t ;
  cin>>t ;
  while(t-- > 0){
    
   solveTest() ;   
  }
    return 0;
}
