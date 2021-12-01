#include <iostream>
#include<vector>
#include<cstring>
using namespace std;

int main() {
	int t,k,len,flag=1,j;
	cin>>t;
	while(t--)
	{
		flag=1;
	    cin>>k;
	    char v[k][10000];
	    for(int i=0;i<k;i++)
	    {
	        cin>>v[i];
	    }
	    for(int i=0;i<k;i++)
	    {   
	        if(flag)
	        {
	        j=0;
	        len = strlen(v[i]);
	        if(v[i][j]>=97&&v[i][j]<=109)
	        {
	            for(int l=1;l<len;l++)
	            {	
	                if(flag)
	                {
	                if(v[i][l]>=97&&v[i][l]<=109)
	                {
	                    flag=1;
	                }
	                else
					{
	                flag=0;
					break;
	                }
					}
	            }
	        }
	        else if(v[i][j]>=78&&v[i][j]<=91)
	        {
	            for(int l=1;l<len;l++)
	            {
	                if(flag)
	                {
	                if(v[i][l]>=78&&v[i][l]<=91)
	                {
	                    flag=1;
	                }
	                else
	                flag=0;
	                }
	            }
	        }
			else
			flag=0;
	        }
	        else
	        break;
	    }
	    if(flag==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
