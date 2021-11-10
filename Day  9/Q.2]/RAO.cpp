#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin>>t;
    
    while(t--){
        ll m, x;
        cin>>m>>x;
        
        if(m>=x) cout<<x<<endl;
        else{
            cout<<m - (x-m)<<endl;
        }
    }
    
    return 0;
}
