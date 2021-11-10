package myProject;

import java.io.*;
import java.util.*;

 
 
public class Test
{
	final static FastReader fr = new FastReader();
	final static PrintWriter out = new PrintWriter(System.out);
	
	static void solve()
	{	
	   int n = fr.nextInt();
	   
	   int arr[]= new int[n] ;
	   int ans[] = new int[n] ;
	  
	   for (int i = 0 ; i < n ; i++) arr[i] = fr.nextInt();
	   
	   // curr represents how many layers can be drenched with cream 
	   // at arr[i]
	   int curr = 0 ;
	 
	   // we are starting from uppermost layer
	   for (int i = n-1 ; i >=0 ; i--)
	   {
		   // if we can drench more layer with
		   // arr[i] than with curr then update curr
		   curr = Math.max(arr[i], curr) ;
		   if (curr > 0) ans[i] = 1 ;
		   
		   // while moving down decreament curr
		   curr-- ;
	   }
	 
	   // print answer
	   for (int x : ans) out.print(x + " ");
	   out.println();
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