class Solution
{
    public:
        bool isValidSudoku(vector<vector < char>> &board)
        {
            unordered_set<char> hash;
            for (int i = 0; i < board.size(); i++)
            {
                for (int j = 0; j < board[0].size(); j++)
                {
                    if (board[i][j] != '.')
                    {
                        if (hash.contains(board[i][j]))
                        {
                            return false;
                        }
                        else
                        {
                            hash.insert(board[i][j]);
                        }
                    }
                }
                hash.clear();
            }
            for (int j = 0; j < board[0].size(); j++)
            {
                for (int i = 0; i < board.size(); i++)
                {
                    if (board[i][j] != '.')
                    {
                        if (hash.contains(board[i][j]))
                        {
                            return false;
                        }
                        else
                        {
                            hash.insert(board[i][j]);
                        }
                    }
                }
                hash.clear();
            }
            int z = 0;
            int f = 0;
            for (int k = 0; k < 9; k++)
            {
                for (int i = z; i < 3 + z; i++)
                {
                    for (int j = f; j < 3 + f; j++)
                    {
                        if (board[i][j] != '.')
                        {
                            if (hash.contains(board[i][j]))
                            {
                                return false;
                            }
                            else
                            {
                                hash.insert(board[i][j]);
                            }
                        }
                    }
                }
                hash.clear();
                    if (f + 3 > 8)
                    {
                        f = 0;
                        if (z + 3 > 8)
                        {
                            break;
                        }
                        else
                        {
                            z = z + 3;
                        }
                    }
                    else
                    {
                        f = f + 3;
                    }
            }
            return true;
        }
};
