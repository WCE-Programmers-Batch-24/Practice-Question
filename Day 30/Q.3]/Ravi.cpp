class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
        vector<vector<int>> ans;
        int end = v[0][1];
        int start = v[0][0];
        for(int i=0;i<n;i++)
        {
            if(v[i][0]<=end)
            {
                end = max(v[i][1],end);
            }
            else
            {
                ans.push_back({start,end});
                start = v[i][0];
                end = v[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};
