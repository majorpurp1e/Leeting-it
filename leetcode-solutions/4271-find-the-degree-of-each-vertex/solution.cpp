class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) 
    {
        vector<int> row(matrix.size(),0);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==1)
                {
                row[i]++;
                row[j]++;
                }
            }
        }
        for(int i=0;i<row.size();i++)
        {
            row[i]=row[i]/2;
        }
        return row;
    }
};
