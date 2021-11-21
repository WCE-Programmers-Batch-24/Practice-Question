#include<stdio.h>

int checkPrime(int number)
{
  int flag= 1;

  for(int i=2; i<=number/2; i++)
  {
     if(number%i == 0)
     {
       flag=0;
       break;
     }
  }
  return flag;
}  

int main(){
    
   int t,start,end,count=0,flag;
   scanf("%d",&start);
   scanf("%d",&end);
   for(int i=start;i<=end+1;i++){
         flag=checkPrime(i+1);
         
         
         if(flag==0){
            
           count++;
           }
   }          
    printf("%d",count);
   
    return 0;
     
}
