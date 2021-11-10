import java.util.*;

class Code
{
	public static void main (String[] args) 
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
	        
	        int t= sc.nextInt();
	        for(int i=0;i<t;i++)
	        {
	            int A=sc.nextInt();
	            int B=sc.nextInt();
	            int N=sc.nextInt();
	
	            if(N%2==0)
	            {
	                int result=Math.max(A,B)/Math.min(A,B);
	                System.out.println(result);
	            }
	            else
	            {
	                int result=Math.max(2*A,B)/Math.min(2*A,B);
	                System.out.println(result);
	            }
	        }
	        sc.close();
	    
	}
}
