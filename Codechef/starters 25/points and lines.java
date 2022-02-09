/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt() ;
		while(t-- > 0){
		    
		    int n = scn.nextInt() ;
		    HashMap<Integer , Integer> mapx = new HashMap<>() ;
		    HashMap<Integer , Integer> mapy = new HashMap<>() ;
		    for( int i = 0 ; i < n ; i++ ){
		        
		        int x = scn.nextInt() ;
		        int y = scn.nextInt() ;
		        
		        mapx.put(x , mapx.getOrDefault(x,  0)+1) ;
		        
		        mapy.put(y , mapy.getOrDefault(y,  0)+1) ;
		        
		        
		    }
		    
		    
		    
		    System.out.println( mapx.size() + mapy.size() ) ; 
		    
		    
		    
		}
	}
}
