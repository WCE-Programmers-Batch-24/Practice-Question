#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll with;
    float bal, tax = 0.50;
    cin>>with>>bal;
    
    if(with%5==0 && with<=bal-0.5){
        bal = bal - with - 0.5;
    }
    
    cout<<fixed<<setprecision(2)<<bal;
   
    return 0;
}
