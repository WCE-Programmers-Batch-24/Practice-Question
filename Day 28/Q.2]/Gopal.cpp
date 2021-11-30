#include <iostream>
using namespace std;

int main() { int t;
cin>>t;
while(t--)
{ int n,m;
cin>>n>>m;
int a[m],b[n],k=0,c=0;


for(int i=0;i<m;i++)
cin>>a[i];





for(int i=1;i<=n;i++)
{
         
         for(int j=0;j<m;j++)
         {
                  if(a[j]==i)
                  { c=1;
                           break;
                           
                  }
                  
         }
         if(c==0)
         {
                  b[k]=i;
                  k++;
                  
         }
         
         c=0;
}
         
         
         
         for(int i=0;i<k;i+=2)
         {  cout<<b[i]<<" ";
                  
         }
         cout<<endl;
         for(int i=1;i<k;i+=2)
         {  cout<<b[i]<<" ";
                  
         }
         if(k=1)
         cout<<" ";
        cout<<endl;
         
         
                  
}
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
	// your code goes here
	return 0;
}
