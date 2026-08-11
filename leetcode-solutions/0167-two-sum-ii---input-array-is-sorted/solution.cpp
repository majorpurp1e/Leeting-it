class Solution
{
    public:
        vector<int> twoSum(vector<int> &numbers, int target)
        {
            vector<int> ans(2, -1);
            unordered_map<int, vector < int>> hash;
            for (int i = 0; i < numbers.size(); i++)
            {
                hash[numbers[i]].push_back(i);
            }
            for (int i = 0; i < numbers.size(); i++)
            {
                ans[0] = i + 1;
                int rem = target - numbers[i];
                if (hash.contains(rem))
                {
                    for (int x = 0; x < hash[rem].size(); x++)
                    {
                        if (hash[rem][x] > i)
                        {
                            ans[1] = hash[rem][x] + 1;
                            return ans;
                        }
                    }
                }
            }
            return ans;
        }
};
