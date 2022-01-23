/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.* ; 


    
public class Main
{
     public static class Pair{
        int val1 ;
        int val2 ;
        
        Pair( int val1 , int val2 ){
           this.val1 = val1 ;
            this.val2 = val2;
            
        }
    }
   
	public static  void main(String[] args) {
	    Scanner scn = new Scanner(System.in) ;
	    
	   int t = scn.nextInt() ;
	   
	   while( t-- > 0 ){
	       
	       int n = scn.nextInt() ;
	       int k = scn.nextInt() ;
	       
	       int[] a = new int[n] ;
	       int[] b  = new int[n] ;
	       
	       for(int i = 0 ; i < n ; i++){
	           a[i] = scn.nextInt() ; 
	       }
	        for(int i = 0 ; i < n ; i++){
	           b[i] = scn.nextInt() ; 
	       }
	       
	      
	       
	       Pair[] arr = new Pair[n] ;
	       for(int i = 0 ; i < n ; i++){
	           arr[i] = new Pair( a[i] , b[i] ) ;
	           
	       }
	       
	        Arrays.sort(arr, new Comparator<Pair>() {
            @Override public int compare(Pair p1, Pair p2)
            {
                return p1.val1 - p2.val1;
            }
        });
        
       
        int sum = k;
        
        for(int i = 0 ; i < n ; i++){
            if( sum >= arr[i].val1 ){
                sum+=arr[i].val2 ; 
            }
        }
	       
	       System.out.println(sum) ; 
	      
	   }  
	    
	    
	}
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int t;
// cin>>t;
// while(t--)
// {
// int n,a;
// cin>>n>>a;
// vector<pair<int,int>>v(n);
// for(int i=0;i<n;i++)
// {
//     cin>>v[i].first;
// }
// for(int i=0;i<n;i++)
// {
//     cin>>v[i].second;
// }
// sort(v.begin(),v.end());
// int i=0;
// while(a>=v[i].first &&i<n)
// {
// a+=v[i].second;
// i++;
// }
// cout<<a<<endl;
// }
 
// }