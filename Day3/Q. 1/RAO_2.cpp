#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countOdd(int m){
    int n = m/2;
    
    if(m&1){
        n += 1;
    }
    
    return n;
}

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll n, m, x, y;
        string s;
        cin>>n>>m>>x>>y;
        cin>>s;
        
        ll c = 0, evenS = 0, oddS = 0, minOdd = 0, minEven = 0, odd = 0, even = 0;
        
        for(ll i=0; i<y; i++){
            if(s[i]=='E') evenS++;
            else oddS++;
        }
        //cout<<evenS<<" "<<oddS<<endl;
        
        odd = countOdd(m);
        even = m - odd;
        //cout<<odd<<" "<<even<<endl;
        
        minOdd = min(x*odd, oddS);
        minEven = min(x*even, evenS);
        //cout<<minOdd<<" "<<minEven<<endl;
        
        if((minOdd + minEven)>=n) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
    return 0;
}
