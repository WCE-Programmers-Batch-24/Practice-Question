#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    
    while(t--){
        ll n, a;
        cin>>n;
        
        ll A[n], B[n] = {0};
        for(ll i=0; i<n; i++) cin>>A[i];
        
        a = A[n-1];
        for(ll i=n-1; i>=0; i--){
            
            if(a!=0 || A[i]!=0){
                B[i] = 1;
                
                a = max(a, A[i]);
                a--;
            }
            else a = A[i];
        }
        
        for(ll i=0; i<n; i++) cout<<B[i]<<" ";
        cout<<endl;
    }
}
