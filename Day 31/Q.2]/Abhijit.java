import java.io.*;
import java.util.*;



public class Test
{
    final static FastReader fr = new FastReader();
    final static PrintWriter out = new PrintWriter(System.out);



    static void solve()
    {

        int n = fr.nextInt();

        int arr[] = new int[n] ;
        int min = Integer.MAX_VALUE ;

        // find min number. As a%b > b, any num and min will form the pair
        for (int i = 0 ; i < n ; i++)
        {
            arr[i] = fr.nextInt();
            min = Math.min(min, arr[i]) ;
        }

        int cnt = 0 ;

        for (int i = 0 ; i < n ; i++)
        {
                if (arr[i] != min)
                {
                    cnt++ ;
                    out.println(arr[i] + " "+ min);
                }
                
            if (cnt >= n/2) break ;
        }


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
