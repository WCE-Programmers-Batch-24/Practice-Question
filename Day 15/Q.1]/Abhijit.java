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
      int n  = fr.nextInt(), k = fr.nextInt();
      int arr[] = new int[n] ;
       
      for (int i= 0 ; i < n; i++) arr[i] = fr.nextInt();
      
      Map<Integer, Integer> map = new HashMap<>();

      for (int i = 0 ; i < n ; i++)
      {
          if (!map.containsKey(arr[i]))
    	  map.put(arr[i],  Math.min(i+1, n-i)) ;
    	  else map.put(arr[i], Math.min(map.get(arr[i]), Math.min(i+1, n-i))) ;
      }
      
      int ans = Integer.MAX_VALUE;
      for (int j = 0 ; j < n ; j++)
      {
          int x = arr[j] ;
          
          if((map.get(k-x)!=null && x!=(k-x)))
          {
    				ans=Math.min(ans,Math.max(map.get(x),map.get(k-x)));
     	}
      }
      
      
      if (ans == Integer.MAX_VALUE) out.println(-1) ;
      else out.println(ans) ;
      
       
	}
	
	
	public static void main(String[] args) 
	{
		
	      int t  = 1 ;  
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
