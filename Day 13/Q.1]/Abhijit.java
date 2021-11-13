import java.io.*;
import java.util.*;


public class Test
{
	final static FastReader fr = new FastReader();
	

	static void solve()
	{	
		int n = fr.nextInt(), k = fr.nextInt();
		
		if (k <= Math.sqrt(n) && (n&1) == (k&1)) System.out.println("YES");	
		else System.out.println("NO");
	}
	
	public static void main(String[] args) 
	{
	      int t = fr.nextInt();
	      while (t-- > 0)
	      {
	    	  solve();
	      }
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
