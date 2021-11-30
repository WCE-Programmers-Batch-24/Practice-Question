#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	int t=1;
	while(t--){
	    ll n,k,ans=INT_MAX;
	    cin>>n>>k;
	    ll arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
		unordered_map<ll,ll> m1;
	    for(ll i=0;i<n;i++)
        {
			ll temp = min(i+1,n-i);
	        if(m1[arr[i]]==0 || m1[arr[i]]>temp) 
                m1[arr[i]]=temp;
	    }
	    for(int i=0;i<n;i++){
	        ll curr = arr[i]; 
            ll req = k-curr;
	        if(curr==req) continue;
	        else if(m1[req]==0) continue;
	        ans=min(ans,max(m1[curr],m1[req]));
	    }
	    if(ans==INT_MAX) ans=-1;
	    cout<<ans<<endl;
	}
	return 0;
}
