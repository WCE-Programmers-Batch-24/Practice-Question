import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	   Scanner sc  = new Scanner(System.in) ;
	   
	   int t = sc.nextInt() ;
	   
	   while (t-- > 0)
	   {
	       
	       int n = sc.nextInt() ;
	       
	       int arr[] = new int[n] ;
	       
	       for (int i = 0 ; i < n  ; i++) arr[i] = sc.nextInt() ;
	       
	       if (n <= 2) {
	           for (int i = 0 ; i < n-1 ; i++) System.out.print(arr[i] + ",") ;
	           
	           System.out.println(arr[n-1]) ;
	           
	       } else{
	       
	       int i = 0 ;
	       
	       while (i < n)
	       {
	           System.out.print(arr[i]) ;
	           
	           i++ ;
	           
	           if (i < n-1 && arr[i] == arr[i-1]+1 && arr[i+1] == arr[i]+1)  {
	               System.out.print("...") ;
	               
	               while (i < n-1 && arr[i] == arr[i++ + 1]-1) ;
	               
	               if (arr[i] != arr[i-1]+1)
	               i-- ;
	           } else {
	               if (i != n)
	               System.out.print(",") ;
	           }
	           
	       }
	       
	       
	       System.out.println() ;
	       }
	       
	   }
	   
	   
	   
	}
}
