/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	final static FastReader fr = new FastReader();
	final static PrintWriter out = new PrintWriter(System.out);
	
	static void solve()
	{	
	   int n = fr.nextInt(), m = fr.nextInt();
	   String[] s = new String[n] ;
	   
	   for (int i = 0 ; i < n ; i++) s[i] = fr.next();
	   
	   int start_x = m, start_y = n, end_x = 0, end_y = 0 ;
	   
	   for (int i = 0 ; i < n ; i++)
	   {
	       int flag = 0 ;
		   for (int j = 0 ; j < m ; j++)
		   {
			   if (s[i].charAt(j) == '1') {
				   start_x = j ; 
				   start_y = i ;
				   flag = 1 ;
				   break ;
			   }
		   }
		  if (flag == 1) break ;
	   }
	   
	   for (int i = n-1 ; i >=0 ; i--)
	   {
	       int flag = 0 ;
		   for (int j = m-1 ; j >=0 ; j--)
		   {
			   if (s[i].charAt(j) == '1') {
				   end_x = j ;
				   end_y = i ;
				   flag = 1 ;
				   break ;
			   }
		   }
		   if (flag == 1 ) break ;
	   }
	   
	   
	   boolean ans = true ;
	   
	   if (start_x == m || start_y == n) {
	       out.println("NO") ;
	       return ;
	   }
	   
	   for (int i = start_y ; i < n ; i++)
	   {
		   for (int j = 0 ; j < start_x ; j++)
		   {
			   if (s[i].charAt(j) == '1') {
				   ans = false ;
				   break ;
			   }
		   }
	   }
	   
	   for (int i = start_y ; i <= end_y ; i++)
	   {
		   for (int j = start_x ; j <= end_x ; j++)
		   {
			   if (s[i].charAt(j) == '0') {
				   ans = false ;
				   break ;
			   }
		   }
	   }
	   
	   for (int i = start_y ; i <= end_y ; i++)
	   {
		   for (int j = end_x+1 ; j < m ; j++)
		   {
			   if (s[i].charAt(j) == '1') {
				   ans = false ;
				   break ;
			   }
		   }
	   }
	   
	   
	   if (ans) out.println("YES") ;
	   else out.println("NO") ; 
	}
	
	
	public static void main(String[] args) 
	{
	      int t = fr.nextInt();
	      while (t-- > 0)
	      {
	    	  solve();
	      }
	      out.close();
	}
	
	
	static class FastReader {
 
	    BufferedReader br;
	    
	    StringTokenizer st;
 
	    public FastReader()
	    {
	        br = new BufferedReader(
	            new InputStreamReader(System.in));
	    }
 
	    String next()
	    {
	        while (st == null || !st.hasMoreElements()) {
	            try {
	                st = new StringTokenizer(br.readLine());
	            }
	            catch (IOException e) {
	                e.printStackTrace();
	            }
	        }
	        return st.nextToken();
	    }
 
	    int nextInt() { return Integer.parseInt(next()); }
 
	    long nextLong() { return Long.parseLong(next()); }
 
	    double nextDouble()
	    {
	        return Double.parseDouble(next());
	    }
 
	    String nextLine()
	    {
	        String str = "";
	        try {
	            str = br.readLine();
	        }
	        catch (IOException e) {
	            e.printStackTrace();
	        }
	        return str;
	    }
	}
}
