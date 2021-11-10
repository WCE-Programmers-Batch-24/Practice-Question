/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in) ;
		int t = sc.nextInt() ;
		
		while (t-- > 0)
		{
		    int n = sc.nextInt(), k =sc.nextInt(), x = sc.nextInt(), y = sc.nextInt() ;
		    
		    int s = x ;
		    
		    boolean ans = false ;
		    for (int i = 0 ; i < n ; i++)
		    {
		        x = (x+k)%n ;
		       
		        if (x == y) 
		        {
		            ans = true ;
		            break ;
		        }
		        
		         if (s == x) break ;
		        
		    }
		    if (ans)
		    System.out.println("YES") ;
		    else System.out.println("NO") ;
		    
		}
	}
}
