import java.io.*;

import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0)

        { 

           int m = sc.nextInt(),  x = sc.nextInt();

            int num1 = Math.min( m, x);

            int num2 = x-num1;

            System.out.println(num1-num2);

        }

    }

}
