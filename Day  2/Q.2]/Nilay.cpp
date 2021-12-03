#include <iostream>
#include<math.h>
#include<vector>
using namespace std;
const int MAXN = 1e7;
vector<int> Prime_Count(MAXN+1);
 vector<bool> isPrime(MAXN+1,true);


void sieve (){
    int y = MAXN;
  
   isPrime[0]=isPrime[1]=false;
    
    for(long long i=2;i<=y;i++){ 
        Prime_Count[i]=Prime_Count[i-1];
          if(isPrime[i])
          
          {  
             Prime_Count[i]++;
              for(long long j=2*i;j<=y;j=j+i)
              {
                  isPrime[j]=false;
              }
          }
         
    }
   
         
}
int main() {
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    sieve();
int t;
cin>>t;
 
while(t!=0){
    int x,y;
    cin>>x>>y;
  int ans;
    
   
    ans=y-x-(Prime_Count[y]-Prime_Count[x+1]);
    cout<<ans<<endl;
   
    t--;
    
}


	return 0;
}
