class Solution {
public:
    int majorityElement(vector<int>& A) {
        sort(A.begin(), A.end());
        
        return A[(A.size()/2)];
    }
};
