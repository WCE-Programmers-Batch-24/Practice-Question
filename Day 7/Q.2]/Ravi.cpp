#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll min = INT_MAX,curr=0;
		for(ll i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
				curr = (n/i) - i;
			if(curr<min)
				min = curr;
		}
		cout<<min<<endl;
	}
	return 0;
}
