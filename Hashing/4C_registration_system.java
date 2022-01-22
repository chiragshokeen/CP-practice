import java.util.* ; 
public class Main
{
	public static void main(String[] args) {
	    Scanner scn = new Scanner(System.in) ;
	    
	    int n = scn.nextInt() ;
	    HashMap<String  , Integer> map = new HashMap<>() ;
	    
	    for( int i = 0 ; i < n ; i++ ){
	        String s = scn.next() ;
	        
	        if( !map.containsKey(s) ){
	            map.put(s , 1) ; 
	            System.out.println("OK") ; 
	        }else{
	            
	            int val = map.get(s) ;
	            String str = s+val+"" ;
	            map.put(str,1) ;
	            val++ ; 
	            map.put(s , val  );
	            System.out.println(str) ; 
	            
	        }
	        
	        
	        
	    }
	    
	    
	    
	}
}