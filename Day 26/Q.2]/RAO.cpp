#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        int n, b = 0, B = 1, w = 0, W = 1;
        cin>>n;
        
        string s;
        cin>>s;
        
        for(int i=0; i<n; i++){
            if(s[i] == 'B' && B){
                b++;
                B = 0;
            }
            else if(s[i] != 'B') B = 1;
            
            if(s[i] == 'W' && W){
                w++;
                W = 0;   
            }
            else if(s[i] != 'W') W = 1;
        }

        cout<<min(b,w)<<endl;
    }
    
    return 0;
}
