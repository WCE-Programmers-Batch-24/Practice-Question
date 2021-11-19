class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int start_row=0,start_column=0,end_row=arr.size()-1,end_column=arr[0].size()-1;
        vector<int> v;
        while(start_row<=end_row && start_column<=end_column)
        {
            // Print First Row From First Column To Last Column
            for(int i=start_column;i<=end_column;i++) 
                v.push_back(arr[start_row][i]);
            // Print Last Column From One Below of First Row To End Row
            for(int i=start_row+1;i<=end_row;i++)
                v.push_back(arr[i][end_column]);
            // Print Last Row From One Before Last Column To First Column
            for(int i=end_column-1;i>=start_column;i--)
            {
                // If Rows are more than Columns , one situation might arise where First Row and Last Row will be same 
                // So it would have been printed already in previous loop
                if(start_row==end_row) break;
                v.push_back(arr[end_row][i]);
            }
            // Print First Column From One Before The Last Row To One Next To First Row
            for(int i=end_row-1;i>=start_row+1;i--)
            {
                // If Columns are more than Rows , one situation might arise where First Column and Last Column will be same 
                // So it would have been printed already in previous loop
                if(start_column==end_column) break;
                v.push_back(arr[i][start_column]);
            }
            // Shifting First Row and Column To Next
            // and Last Row and Column To Second Last
            start_row++;
            end_row--;
            start_column++;
            end_column--;
        }
        return v;
    }
};
