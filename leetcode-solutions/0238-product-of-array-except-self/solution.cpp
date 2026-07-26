class Solution
{
    public:
        vector<int> productExceptSelf(vector<int> &nums)
        {
            vector<int> res(nums.size(), 1);
            int prefix = 1;
            for (int i = 1; i < nums.size(); i++)
            {
                prefix = prefix *nums[i - 1];
                res[i] = prefix;
            }
            int suffix = 1;
            for (int i = nums.size() - 1; i >= 0; i--)
            {

                res[i] = res[i] *suffix;
                suffix = suffix *nums[i];
            }
            return res;
        }
};
