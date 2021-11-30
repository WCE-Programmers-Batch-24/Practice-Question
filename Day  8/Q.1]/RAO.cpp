#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll a, b, sum, c = 0, n;
        cin>>a>>b;
        
        sum = a + b;
        string s = to_string(sum);
        
        n = s.length();
        for(ll i=0; i<n; i++){
            if(s[i] == '2' || s[i] == '3' || s[i] == '5') c += 5;
            else if(s[i] == '0' || s[i] == '6' || s[i] == '9') c += 6;
            else if(s[i] == '1') c += 2;
            else if (s[i] == '4') c += 4;
            else if (s[i] == '7') c += 3;
            else c += 7;
        }
        
        cout<<c<<endl;
    }
    
    return 0;
}
