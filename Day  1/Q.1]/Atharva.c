#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000];
        scanf("%s",s);
         int len;
         int i,j,count =0;
         len=strlen(s);
         
        if(len%2 !=0)
        {
            for(i=0;i<len/2;i++)
            {
                for(j=(len/2)+1;j<len;j++)
                {
                    if(s[i] == s[j])
                    {
                       count=count+1; 
                    }
                }
            }
        }
         else if(len%2 ==0)
        {
            for(i=0;i<len/2;i++)
            {
                for(j=(len/2);j<len;j++)
                {
                    if(s[i] == s[j])
                    {
                         count=count+1;
                    }
                }
            }
        }
        if(count==len/2)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
    }
}
