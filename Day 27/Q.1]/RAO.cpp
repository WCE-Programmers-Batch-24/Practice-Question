#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll n, c = 0;
        cin>>n;
        
        int A[n+1];
        for(int i=0; i<n; i++) cin>>A[i];
        
        int i = 0;
        while(i<n){
            if(i>=1) cout<<",";
            
            int j = i + 1;
            while( (j<=n) && (A[j] - A[i] == j-i) ) j++;
            
            if( (j-i)>2 ){
                cout<<A[i]<<"..."<<A[j-1];
                i = j;
            }
            else{
                cout<<A[i];
                i++;
            }
        }
        cout<<endl;
    }
    
    return 0;
}
