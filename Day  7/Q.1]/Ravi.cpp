#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n = s.size();
		int count = 0;
		if(s[0]=='0')
				count++;
		for(int i=0;i<n;i++)
		{
			
			if(s[i]!=s[i-1] && i!=0)
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
