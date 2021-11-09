#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll a, b, n;
        cin>>a>>b>>n;
        
        if(n&1){
            cout<<max((a*2)/b, b/(a*2))<<endl;
        }
        else{
            cout<<max(a/b, b/a)<<endl;
        }
        //cout<<max(a/b, b/a)<<endl;
    }
    
    return 0;
}
