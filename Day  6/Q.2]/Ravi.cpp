class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count = 0;
        int max = -1;
        for(int i = 0; i < arr.size(); ++i){
            if(max < arr[i])
                max = arr[i];
            if(max == i)
                ++count;
        }
        return count;
    }
};
