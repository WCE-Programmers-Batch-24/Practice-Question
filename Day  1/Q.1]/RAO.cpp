#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        string s, a, b;
        cin>>s;
        
        ll n, m;
        n = s.length();
        m = n/2;
        
        a = s.substr(0, m);
        if(n&1){
            b = s.substr(m+1, n-1);
        }
        else b = s.substr(m, n-1);
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int c = a.compare(b);
        if(c==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}
