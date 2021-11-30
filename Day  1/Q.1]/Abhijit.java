package myProject;

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	final static FastReader fr = new FastReader();
	final static PrintWriter out = new PrintWriter(System.out);
	
	static void solve()
	{	
	   String s = fr.next();
	   
	   int count_of_alphabets[] = new int[26] ;
	   
	   for (int i = 0 ; i < s.length()/2 ; i++)
	   {
		   char ch = s.charAt(i) ;
		   
		   count_of_alphabets[ch - 'a']++ ;
	   }
	   
	   for (int i = (s.length()+1)/2 ; i < s.length(); i++)
	   {
		   char ch = s.charAt(i) ;
		   count_of_alphabets[ch - 'a']-- ;
	   }
	   
	   for (int i = 0 ; i < 26 ; i++)
	   {
		   if (count_of_alphabets[i] != 0) {
			   out.println("NO") ;
			   return ;
		   }
	   }
	   
	   out.println("YES") ;
	   
	   
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
