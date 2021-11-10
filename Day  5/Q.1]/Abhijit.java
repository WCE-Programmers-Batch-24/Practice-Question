package myProject;

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
	   long c = fr.nextLong();
	   
	   long curr = 1 ;
           // finding 2's power just less than c
	   while (curr <= c)
	   {
		   curr *= 2 ;
	   }
	   curr /=2 ;
	
	   long num1 = curr - 1 ;
	   long num2 = c^num1 ;
	   
	   out.println(num1*num2) ;
	   
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
