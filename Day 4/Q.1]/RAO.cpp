#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        ll n, a, b;
        cin>>n>>a>>b;
        
        if((b-a)==0) cout<<(n-1)*a;
        else{
            if(b>a){
                vector<ll> V;
                for( ll i=(n-1)*a; i<=(n-1)*b; i += (b-a) ){
                    V.push_back(i);
                }
        
                ll m = V.size();
                for(ll i=0; i<m; i++){
                    cout<<V[i]<<" ";
                }
            }
            else{
                vector<ll> V;
                for( ll i=(n-1)*b; i<=(n-1)*a; i += (a-b) ){
                    V.push_back(i);
                }
        
                ll m = V.size();
                for(ll i=0; i<m; i++){
                    cout<<V[i]<<" ";
                }
            } 
        }
        
        cout<<endl;
    }
}
