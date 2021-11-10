#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n,k, result =0;
	    cin>>n>>k;
	    ll a[n];
	    for(ll i=0; i<n; i++){
	        cin>>a[i];
	    }
	     for(ll i=0; i<n; i++){
	        result = result + a[i];
	    }
	    cout<<result%k<<endl;
	}
	return 0;
}
