class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            vector<int> ans;
            int size = 1;
            int prev = nums[0];
            for (int i = 1; i < nums.size(); i++)
            {
                if (prev == nums[i])
                {
                    size++;
                }
                else
                {
                    if (size > (nums.size() / 3))
                    {
                        ans.push_back(prev);
                    }
                    size = 1;
                    prev = nums[i];
                }
            }
            if (size > (nums.size() / 3))
            {
                ans.push_back(prev);
            }
            return ans;
        }
};
