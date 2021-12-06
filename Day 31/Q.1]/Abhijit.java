import java.io.*;
import java.util.*;



public class Test
{
    final static FastReader fr = new FastReader();
    final static PrintWriter out = new PrintWriter(System.out);



    static void solve()
    {

        long x1 = fr.nextLong(), p1  = fr.nextLong();
        long x2 = fr.nextLong(), p2 = fr.nextLong();

        long d1 = 0 , curr = x1;
        while (curr > 0)
        {
            d1++ ;
            curr /= 10 ;
        }
        long d2  =0 ;
        curr = x2 ;

        while (curr > 0)
        {
            d2++ ;
            curr /= 10 ;
        }

        // number with more digits is larger
        if (d1+p1 > d2+p2){
            out.println(">");
            return ;
        } else if (d2+p2 > d1+p1){
            out.println("<");
            return ;
        }

        // if num of digits as well as no of zeros are same, greater num will give ans
        if (p1 == p2){
            if (x1 > x2) out.println(">");
            else if (x1 == x2) out.println("=") ;
            else out.println("<") ;

            return ;
        }

        // else make no of digits in both nums equal . Add zeros at end of num which has less digits
        if (d1 > d2){
            
            for (int i = 0 ; i < d1-d2; i++){
                x2 *= 10 ;
            }
            
        } else {
            for (int i = 0 ; i < d2-d1; i++){
                x1 *= 10 ;
            }
        }

         // then check nums
        if (x1 > x2) out.println(">");
        else if (x1 == x2) out.println("=");
        else out.println("<");
        


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
