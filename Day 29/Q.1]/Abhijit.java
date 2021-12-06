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

      int n = fr.nextInt();
      int arr[] = new int[2*n] ;

      TreeSet<Integer> ts = new TreeSet<>() ;

      Map<Integer, Integer> map = new HashMap<>() ;

      for (int i = 0 ; i < 2*n ; i++){
          arr[i] = fr.nextInt();

          if (map.containsKey(arr[i])){
              map.put(arr[i], map.get(arr[i])+1) ;
          } else map.put(arr[i], 1) ;

          ts.add(arr[i]) ;
      }

      Object[] temp = ts.toArray() ;
      int len = temp.length ;
      int x = -1 ;
      for (int i = 0 ; i < len ; i++)
      {
          if (i%2 == 0) x++ ;
          int curr_med = (int)temp[x] ;
          map.put(curr_med, map.get(curr_med)-1) ;
      }

      int curr = len-1 ;
      for (int i = 0 ; i < len ; i++)
      {
          if (i%2!=0) curr-- ;

          int curr_med = (int) temp[curr] ;
          map.put(curr_med, map.get(curr_med)-1) ;
      }


      for (int y : ts){
          if (map.get(y) != 0) {
              out.println(-1) ;
              return ;
          }
      }

      for (int y: ts) out.print(y + " ") ;

      out.println() ;

    }

    public static void main(String[] args)
    {
        int t  = fr.nextInt();
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
