#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t, p1, p2, sum1 = 0, sum2 = 0, winner = 0, diff, max_diff = 0;; 
    cin>>t;
    
    while(t--){
        cin>>p1>>p2;
        
        sum1 += p1;
        sum2 += p2;
        
        diff = abs(sum1 - sum2);
        
        if(diff > max_diff){
            max_diff = diff;
            
            if(sum1>=sum2) winner = 1;
            else winner = 2;
        }
    }
    
    cout<<winner<<" "<<max_diff<<"\n";  
    
    return 0;
}
