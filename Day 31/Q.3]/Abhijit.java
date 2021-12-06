import java.io.*;
import java.util.*;



public class Test
{
    final static FastReader fr = new FastReader();
    final static PrintWriter out = new PrintWriter(System.out);



    static void solve()
    {

        int n = fr.nextInt();

        long h = fr.nextLong();

        int arr[] = new int[n] ;

        for (int i = 0 ; i < n ; i++) arr[i] = fr.nextInt() ;
      
        // as we can observe ans will always lie in range [1, h]
        // we can perform binary search on this range and check for
        // each mid if k == mid is possible. if possible store ans and
        // search in left else search in right

        long e = h, s = 1 ;
        long ans = -1 ;

        while (s <= e)
        {
            long mid = (s+e)/2 ;
            if (isPossible(arr, mid, h)){
                ans = mid ;
                e = mid-1 ;
            } else s = mid + 1 ;
        }

        out.println(ans);

    }

    static boolean isPossible(int arr[], long k, long h)
    {
        long damages = 0 ;
        for (int i = 0 ; i < arr.length-1 ; i++)
        {
            if (arr[i+1] - arr[i] > k){
                damages += k ;
            } else damages += (arr[i+1] - arr[i]) ;
        }

        if (h-damages > k) return false ;

        return true ;
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
