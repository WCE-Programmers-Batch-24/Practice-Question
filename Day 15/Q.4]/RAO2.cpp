/*
  Using rand() function!
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; 
    cin>>t;
    
    while(t--){
        ll x, c = 0;
        cin>>x;
        
        // picking up a random number and taking it's remainder with x
        c += rand()%x;
        cout<<c<<" "<<x-c<<endl;
    }
    
    return 0;
}
