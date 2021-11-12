#include <iostream>
using namespace std;

int main() {
    int n;
	cin>>n;
	int score1,score2,sumtotal1=0,sumtotal2=0,maxlead=0,winner;
	for(int i=0;i<n;i++)
	{
	    cin>>score1>>score2;
	    sumtotal1 = sumtotal1 + score1;
	    sumtotal2 = sumtotal2 + score2;
	    if(sumtotal1>sumtotal2)
	    {
	        if(maxlead<sumtotal1-sumtotal2)
	        {
	            maxlead = sumtotal1-sumtotal2;
	            winner = 1;
	        }
	    }
	    else
	    {
	        if(maxlead<sumtotal2-sumtotal1)
	        {
	            maxlead = sumtotal2-sumtotal1;
	            winner = 2;
	        }
	    }
	}
	cout<<winner<<" "<<maxlead;
	return 0;
}
