#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
                     
int main(){
    ll t;
    cin>>t;
           
    while(t--){
        ll n, last_divisor = 0, ans = 0;
        cin>>n;

        for(ll i=1; i*i<=n; i++){
            if(n%i == 0 && i > last_divisor){
                last_divisor = i;
            }
        }

        ans = n/last_divisor;

        cout<<abs(ans - last_divisor)<<endl;
    }
              
    return 0;
}
