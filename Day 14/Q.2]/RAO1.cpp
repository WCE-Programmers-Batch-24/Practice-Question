class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        
        for(int i = 0; i < A.size(); i++){
            // pushing even numbers in vector 'even' 
            if(A[i]%2==0){
                even.push_back(A[i]);
            }
            // pushing odd numbers in vector 'odd'
            else{
                odd.push_back(A[i]);
            }
        }
        
        // merging to arrays - even + odd
        even.insert(even.end(), odd.begin(), odd.end());
        return even;
    }
};
