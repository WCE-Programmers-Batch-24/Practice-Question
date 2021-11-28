#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        int c = 0;
        string s;
        cin>>s;
        
        for(int i=0; i<s.length(); i++){
            c += (s[i] == '1') ? 1 : 0 ;
        }

        (c&1) ? cout<<"WIN"<<endl : cout<<"LOSE"<<endl;
    }
    
    return 0;
}
