#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Prefix Sum Method : The Method you should have thought at first
// Time Complexity : O(N)
// Space Complexity : O(N)
int RainWater(int arr[],int n)
{
    // Store the leftmax at each point so that you do not have to traverse again and again
    int left[n];
 
    // Store the rightmax at each point
    // Mool Mantra : Bachcha (Child) , Extra Space Lage To Lage Par Extra Time Na Lage
    int right[n];
 
    int ans = 0;

    left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);
 
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);
 
    // Chhota wall hi length banega , kyunk wohi se spill ho sakta hai
    for (int i = 0; i < n; i++)
        ans += min(left[i], right[i]) - arr[i];
 
    return ans;
}

int main()
{
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<RainWater(arr,n)<<endl;

	return 0;
}
