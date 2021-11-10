class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size(), chunks = 0, max = -1;
        for(int i=0; i<n; i++){
            if(max < arr[i]) max = arr[i];
          
            if(max==i) chunks++;
        }
        return chunks;
    }
};
