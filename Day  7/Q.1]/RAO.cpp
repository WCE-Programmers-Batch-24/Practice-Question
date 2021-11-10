#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
                     
int main(){
    ll t;
    cin>>t;
           
    while(t--){
        string s;
        cin>>s;

        ll n = s.length(), c = 0;

        if(s[0]== '0') c++;

        for(ll i = 0; i<n-1; i++){
            if(s[i] != s[i+1]) c++;
        }

        cout<<c<<endl;
    }
              
    return 0;
}
