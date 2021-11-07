#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		char s[n][m];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>s[i][j];
		int count1 =0 , count2=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(i%2==0 && j%2==0){
						if(s[i][j]=='.')
					count1++;}
					else if(i%2==0 && j%2!=0){
						if(s[i][j]=='*')
					count1++;}
					else if(i%2!=0 && j%2==0){
						if(s[i][j]=='*')
					count1++;}
					else{
						if(s[i][j]=='.')
					count1++;}
					// cout<<i<<" "<<j<<" "<<count1<<endl;
				}
			}

			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(i%2==0 && j%2==0){
						if(s[i][j]=='*')
					count2++;}
					else if(i%2==0 && j%2!=0){
						if(s[i][j]=='.')
					count2++;}
					else if(i%2!=0 && j%2==0){
						if(s[i][j]=='.')
					count2++;}
					else{
						if(s[i][j]=='*')
					count2++;}
						
					// cout<<i<<" "<<j<<" "<<count2<<endl;
				}
			}
			//cout<<count1<<" "<<count2<<endl;
			if((n*m)%2==0) cout<<min(count1,count2)<<endl;
			else
				cout<<count1<<endl;
	}
	return 0;
}
