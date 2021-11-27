#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, MaX = 0;
    cin>>n;
        
    ll A[n];
    for(ll i=0; i<n; i++) cin>>A[i];
        
    sort(A, A + n);
    for(ll i=0, j=n; i<n; i++, j--){
        MaX = max(A[i]*j, MaX);
    }
        
    cout<<MaX<<endl;
    
    
    return 0;
}
