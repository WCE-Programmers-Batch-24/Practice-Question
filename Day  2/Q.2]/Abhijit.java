package myProject;

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
final static FastReader fr = new FastReader();
	final static PrintWriter out = new PrintWriter(System.out);
	static List<Long> noOfPrimes;
	
	static void seive(int n) 
	{
		// all are false by default
		// false -> prime, true -> composite
		boolean nums[] = new boolean[n+1] ;
		
		for (int i = 2 ; i <= Math.sqrt(n); i++)
		{
			if  (nums[i] == false) 
			{
				for (int j = i*i ; j <= n ; j += i)
				{
					nums[j] = true ;
				}
			}
		}
		
		noOfPrimes = new ArrayList<Long>();
		noOfPrimes.add(0l) ;
		noOfPrimes.add(0l) ;
		
		for (int i = 2 ; i <=n ; i++)
		{
			
			if (!nums[i]) 
				noOfPrimes.add(noOfPrimes.get(i-1)+1) ;
			else 
				noOfPrimes.add(noOfPrimes.get(i-1)) ;
		}
		
	}
	
	static void solve()
	{	
	   int x = fr.nextInt(), y = fr.nextInt();
	   
	   int ans = (int) ((y-x) - (noOfPrimes.get(y) - noOfPrimes.get(x+1))) ;
	   
	   out.println(ans);
	}
	
	
	public static void main(String[] args) 
	{
		seive(10000000);
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
