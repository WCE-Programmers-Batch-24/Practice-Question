class Solution {
public:
    int findUnsortedSubarray(vector<int>& A){
        int n = A.size(), s = 0, e = n-1, m = A[0], M = A[0];
        
        for(s=0; s<n-1; s++){
            if(A[s]>A[s+1]) {break;}
        }
        
        if(s==n-1) return 0;
        else{
            for(e=n-1; e>1; e--){
                if(A[e]<A[e-1]){ break;}
            }
        
            m = A[s]; M = A[s];
            for(int i=s; i<=e; i++){
                if(A[i]>M) M = A[i];
                else if(A[i]<m) m = A[i];
            }
        
            for(int i=0; i<s; i++){
                if(A[i]>m){
                    s = i;
                    break;
                }
            }
        
            for(int i=n-1; i>=e; i--){
                if(A[i]<M){
                    e = i;
                    break;
                }
            }
        
            return e-s+1;
        }
        
    }
};
