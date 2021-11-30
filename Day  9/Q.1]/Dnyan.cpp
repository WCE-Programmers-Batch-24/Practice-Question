#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll a,b,n;
	    cin>>a>>b>>n;
	    if(n%2==1){
	        a = 2 * a;
	        cout<<max(a,b)/min(a,b)<<endl;
	    }
	    else{
	        cout<<max(a,b)/min(a,b)<<endl;
	    }
	}
	return 0;
}
