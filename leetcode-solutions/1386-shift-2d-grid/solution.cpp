class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        vector<int> newarr;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                newarr.push_back(grid[i][j]);
            }
        }
        reverse(newarr.begin(),newarr.end());
        reverse(newarr.begin(),newarr.begin()+(k%newarr.size()));
        reverse(newarr.begin()+(k%newarr.size()),newarr.end());
        int g=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                grid[i][j]=newarr[g++];
            }
        }
        return grid;

        
    }
};
