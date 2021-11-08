#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll x, r, m;
        cin>>x>>r>>m;
        
        r *= 60;
        m *= 60;
        
        if(m>=r) cout<<"NO\n";
        else{
            if(2*r - x >= m) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    
    return 0;
}
