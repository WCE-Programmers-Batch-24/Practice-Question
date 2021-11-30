#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll n, m;
        cin>>n>>m;
        
        ll tn, tm;
        cin>>tn>>tm;
        
        ll pn, pm;
        cin>>pn>>pm;
        
        ll min_p, n_move, m_move, total;
        
        n_move = n - tn;
        m_move = m - tm;
        min_p = max(n-pn, m-pm);
        
        total = n_move + m_move;
        
        if(total<=min_p) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
