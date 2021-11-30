/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{

   final static FastReader fr = new FastReader();
	final static PrintWriter out = new PrintWriter(System.out);
	
	static long kaden(long arr[], int k)
	{
		long curr_sum = 0, max_sum = Long.MIN_VALUE, total_sum = 0;
		
		for (int i = 0 ; i < arr.length; i++)
		{
			total_sum += arr[i] ;
			curr_sum += arr[i] ;
			if (max_sum < curr_sum) max_sum = curr_sum;
			
			if (curr_sum < 0) curr_sum = 0 ;
		}
		
	
		
		if (k >=2) {
			for (int i = 0 ; i < arr.length; i++)
			{
				curr_sum += arr[i] ;
				if (max_sum < curr_sum) max_sum = curr_sum;
				
				if (curr_sum < 0) curr_sum = 0 ;
			}
	
			max_sum = Math.max(max_sum, max_sum + (k-2)*total_sum) ;
		} 
		
		return max_sum;
	}
	
	static void solve()
	{	
		int n = fr.nextInt(), k = fr.nextInt();
		
		long arr[] = new long[n] ;
		
		for (int i = 0 ; i < n; i++) arr[i] = fr.nextLong();
		
		out.println(kaden(arr, k));
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
