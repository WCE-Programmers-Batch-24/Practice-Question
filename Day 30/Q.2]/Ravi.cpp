class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> v;
        int start = 0,end = 0,curr = 0;
        while(start < n)
        {
            for(int i=n-1;i>=start;i--)
            {
                if(s[i]==s[start])
                {
                    end = i;
                    break;
                }
            }
            int j = start + 1;
            while(j<end)
            {
                for(int i=n-1;i>=j;i--)
                {
                    if(s[i]==s[j])
                    {
                        curr = i;
                        break;
                    }
                }
                end = max(end,curr);
                j++;
            }
            v.push_back(end-start+1);
            start = end + 1;
        }
        return v;
    }
};
