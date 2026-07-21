class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {
            if (nums.size() > 0)
            {
                unordered_set<int> hash;
                for (int i = 0; i < nums.size(); i++)
                {
                    hash.insert(nums[i]);
                }
                int size = 0;
                int fina = 0;
                auto it = hash.begin();
                while (it != hash.end())
                {
                    if (!hash.contains(*it - 1))
                    {
                        int f = 0;
                        while (hash.contains(*it + f))
                        {
                            size++;
                            f++;
                        }
                        fina = max(fina, size);
                        size = 0;
                        it++;
                    }
                    else
                    {
                        it++;
                    }
                }
                return fina;
            }
            else
                return 0;
        }
};
