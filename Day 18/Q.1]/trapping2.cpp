#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Two Pointer Approach : Best Method To Solve It
// Time Complexity : O(N)
// Space Complexity : O(1)
int RainWater(int arr[],int n)
{
    int l=0,r=n-1,leftmax=0,rightmax=0,ans=0;
    while(l<=r)
    {
        // Agar left waala chhota hai to , minimum wohi hoga na
        // Matlab left side se spill ho sakta hai but right side se nahi
        if(arr[l]<=arr[r])
        {
            if(arr[l]>=leftmax) leftmax = arr[l];
            else ans += leftmax - arr[l];
            l++;
        }
        // Similarly agar right side se chhota hai to right se spill ho sakta hai left se nahi
        else
        {
            if(arr[r]>=rightmax) rightmax = arr[r];
            else ans += leftmax - arr[r];
            r--;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<RainWater(arr,n)<<endl;

	return 0;
}