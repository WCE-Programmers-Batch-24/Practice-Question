class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    deque<int> q;
        int n = arr.size();
	vector<int> v;
	for(int i=0;i<k;i++) 
	{
		while(!q.empty() && arr[q.back()]<arr[i])
		{
			q.pop_back();
		}
		q.push_back(i);
	}
	v.push_back(arr[q.front()]);
	for(int i=k;i<n;i++)
	{
		if(q.front()==i-k)
			q.pop_front();
		while(!q.empty() && arr[q.back()]<arr[i])
		{
			q.pop_back();
		}
		q.push_back(i);
		v.push_back(arr[q.front()]);
	}
    return v;
    }
};
