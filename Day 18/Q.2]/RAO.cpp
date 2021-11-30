#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll n, divi, flag = 1;
        cin>>n;
        
        ll A[n];
        for(int i=0; i<n; i++){
            cin>>A[i];
            
            if(i>0){
                divi = A[i];
                
                if(A[i-1]%divi != 0) flag = 0;
            }
        }
        
        if(flag){
            for(int i=0; i<n; i++) cout<<A[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    
    return 0;
}
