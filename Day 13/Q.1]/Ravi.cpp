#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a>=b*b)
		{
			if(a%2==0 && b%2!=0)
				cout<<"NO"<<endl;
			else if(a%2!=0 && b%2!=0)
				cout<<"YES"<<endl;
			else if(a%2==0 && b%2==0)
				cout<<"YES"<<endl;
			else if(a%2!=0 && b%2==0)
				cout<<"NO"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
