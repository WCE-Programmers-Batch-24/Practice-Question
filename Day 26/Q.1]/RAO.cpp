#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        int k, flag = 1, Case = 0;
        cin>>k;
        
        while(k--){
            int lower = 0, upper = 0;
            string s;
            cin>>s;
            
            for(auto i:s){
                if( int(i)>77 && int(i)<91 ) upper++;
                if( int(i)>96 && int(i)<110 ) lower++;
            }
            
            if( (lower != s.length()) && (upper != s.length()) ) flag = 0;
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
