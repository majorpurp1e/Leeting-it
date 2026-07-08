class Solution
{
    public:
        vector<vector < char>> rotateTheBox(vector<vector < char>> &boxGrid)
        {
            int i = boxGrid[0].size() - 1;
            int x = 0;
            for (int k = 0; k <= boxGrid.size() - 1; k++)
            {
                int place = boxGrid[0].size() - 1;
                for (int j = i; j >= 0; j--)
                {
                    char c = boxGrid[k][j];
                    if (c == '*')
                    {
                        place = j - 1;
                    }
                    else if (c == '#')
                    {
                        boxGrid[k][j] = '.';
                        boxGrid[k][place--] = '#';
                    }
                }
            }
            int m = boxGrid.size();
            int n = boxGrid[0].size();
            vector<vector < char>> ans(n, vector<char> (m));
            for (int i = 0; i < boxGrid.size(); i++)
            {
                for (int j = 0; j<boxGrid[0].size(); j++)
                {
                    ans[j][m-i-1]=boxGrid[i][j];
                }
            }
            return ans;
        }
};
