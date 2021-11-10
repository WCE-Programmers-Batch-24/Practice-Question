#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
	int n;
	cin>>n;
	ll arr[n];
	ll max = 1 ,curr=1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
			curr++;
		else
			curr = 1;
		if(curr>max)
			max = curr;
	}
	cout<<max<<endl;
	return 0;
}
