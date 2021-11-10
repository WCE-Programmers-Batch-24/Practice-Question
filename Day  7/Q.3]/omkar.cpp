#include <stdio.h> 

int main()
{
    int t,xa,xb,Xa,Xb,a,b,c;
    scanf("%d",&t);
    while (t!=0)
    {
       scanf("%d %d %d %d",&xa,&xb,&Xa,&Xb);
    //   a=(Xa/xa);
    //   b=(Xb/xb);
      c=(Xa/xa)+(Xb/xb);
      printf("%d\n",c);
      t--;
    }
    
    return 0;
}
