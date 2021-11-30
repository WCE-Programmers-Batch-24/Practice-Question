#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Brute Force Approach : Worst Method To Solve It
// Time Complexity : O(N^2)
// Space Complexity : O(1)
int RainWater(int arr[],int n)
{
    int ans = 0;
     
    // Traversing through the loop
    for (int i = 1; i < n-1; i++) {
         
        // Calculating the Left Maximum
        int left = arr[i];
        for (int j=0; j<i; j++)
           left = max(left, arr[j]);
         
        // Calculating The Right Maximum 
        int right = arr[i];
        for (int j=i+1; j<n; j++)
           right = max(right, arr[j]);
        
       // Jis side se chhota wall hai wahi container band hoga isliye minimum nikalna hai
       // Got It??   
       ans = ans + (min(left, right) - arr[i]);  
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
