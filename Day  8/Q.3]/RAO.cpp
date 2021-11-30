#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll n, k, c = 0;
        cin>>n>>k;
        
        ll A[n];
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            
            c += x;
        }
        
        cout<<c%k<<endl;
    }
    
    return 0;
}
