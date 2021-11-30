class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<int> spiral;
        
        int up_row = 0, down_row = m - 1;
        int left_col = 0, right_col = n - 1;
        
        while(up_row<=down_row && left_col<=right_col){
            
            // left to right in matrix n copy in spiral (Column movement)
            for(int c = left_col; c <= right_col; c++) spiral.push_back(matrix[up_row][c]);
            
            // top to bottom (at RHS) in matrix n copy in spiral (Row movement)
            for(int r = up_row + 1; r <= down_row; r++) spiral.push_back(matrix[r][right_col]);
            
            // move to right and then up only when up_row and down_row AND left_col and right_col ain't same
            if(up_row < down_row && left_col < right_col){
                // move right upto the left col
                for(int c = right_col - 1; c > left_col; c--) spiral.push_back(matrix[down_row][c]);
                
                // move up upto up row
                for(int r = down_row; r > up_row; r--) spiral.push_back(matrix[r][left_col]);
            }
            
            up_row++;
            left_col++;
            down_row--;
            right_col--;
        }
        
        return spiral;
    }
};
