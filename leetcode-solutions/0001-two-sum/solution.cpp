class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            vector<int> ret;
            unordered_map<int, int> hash;
            for (int i = 0; i < nums.size(); i++)
            {
                int rem = target - nums[i];
                if (hash.contains(rem))
                {
                    ret.push_back(i);
                    ret.push_back(hash[rem]);
                    break;
                }
                else
                {
                    hash[nums[i]] = i;
                }
            }
            return ret;
        }
};
