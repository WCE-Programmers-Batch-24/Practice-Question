#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Stack Approach : Only for those who know Stack already
// Time Complexity = O(N)
// Space Complexity = O(N)
int RainWater(int arr[],int n)
{
	int ans = 0;
	stack<int> st;
	for(int i=0;i<n;i++)
	{
		// We will just push the elements until we found a bigger element than previously pushed element because till that container will not be closed
		while(!st.empty() && arr[st.top()]<arr[i])
		{
			// store the top value
			int top = arr[st.top()];
			st.pop();
			// If stack is empty means there is no wall at left side to form the container
			if(st.empty()) break;
			// Suppose 2 1 0 1
			// Here as soon as 1 came , it formed a right side wall so now water can be stored in the 0 part , we stored the value of 0 in the top variable and we calculated length between 1 0 1 i.e the part where water will be stored 
			// Look Carefully , the water will be stored just at the place of 0 because both sides are 1 , so water will not be able to spread from there
			// i -> Location of later 1
			// st.top() -> Location of previous 1
			// top -> value of 0
			// i - st.top() - 1 stores the place where water will be stored at 0 to 1 level
			int length = i - st.top() - 1;
			// Water will be stored as the height of the container i.e both sides should be closed 
			// What I mean to say is , suppose the height of the wall at the left side is 3 and that of right side is 4 , the height of the container will be 3 only because container needs to be closed from both the sides.
			int width = min(arr[i],arr[st.top()]) - top;
			
			ans += (length*width);
		}
		st.push(i);
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
