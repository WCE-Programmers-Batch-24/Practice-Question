#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll n, m, x, y;
        string s;
        cin>>n>>m>>x>>y;
        cin>>s;
        
        ll c = 0, evenS = 0, oddS = 0;
        
        for(ll i=0; i<y; i++){
            if(s[i]=='E') evenS++;
            else oddS++;
        }
        
        for(int i=1; i<=m && n>0; i++){
            if(i&1){
                // use only x amout of odd guys
                if(oddS>=x){
                    oddS -= x;
                    n -= x;
                }
                else{ // use all odd guys in the string
                    n -= oddS;
                    oddS = 0;
                }
            }
            if(!(i&1)){
                // same as odd wala
                if(evenS>=x){
                    evenS -= x;
                    n -= x;
                }
                else{
                    n -= evenS;
                    evenS = 0;
                }
            }
        }
        
        if(n<=0) c = 1;
        
        if(c) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
    return 0;
}
