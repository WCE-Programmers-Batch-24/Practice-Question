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
	   List<Integer> arr = new ArrayList<>() ;
	   
	   for (int i = 0 ; i < n ; i++) arr.add(fr.nextInt());
	   
	   Collections.sort(arr);
	   
	   int x = arr.get(0) ;
	   int ans = arr.get(0) ;
	   
	   for (int i = 1 ; i < n ; i++)
	   {
		   arr.set(i, arr.get(i)-x) ;
		   if (arr.get(i) > ans) ans = arr.get(i) ;
		   
		   x += arr.get(i) ;
	   }
	   
	   out.println(ans);
	   
	   
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
	
	static long gcd(long a , long b)
	{
		if (b == 0) return a ;
		return gcd(b, a%b) ;
	}
	
	static int lower_bound(List<Integer> arr, int key)
	{
		int pos = Collections.binarySearch(arr, key) ;
	    if (pos < 0)
	    {
	    	pos = -(pos + 1) ;
	    }
	    return pos ;
	}
	
	static int upper_bound(List<Long> arr, long key)
	{
		int pos = Collections.binarySearch(arr, key);
		pos++ ;
		if (pos < 0)
		{
			pos = -(pos) ;
		}
		return pos ;
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
