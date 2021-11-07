class Solution
{
public:
    int maxChunksToSorted(vector<int> &arr)
    {
        int chunk = 0;
        int maxno = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            maxno = max(maxno, arr[i]);
            if (maxno == i)
            {
                chunk++;
            }
        }
        return chunk;
    }
};
