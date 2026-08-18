class Solution
{
    public:
        int largestInteger(vector<int> &nums, int k)
        {
            int large = INT_MIN;
            unordered_map<int, int> freq;
            for (int i = 0; i < nums.size(); i++)
            {
                large = max(large, nums[i]);
                freq[nums[i]]++;
            }

            if (k == 1)
            {
                int z = INT_MIN;
                for (int i = 0; i < nums.size(); i++)
                {
                    if (z < nums[i] && freq[nums[i]] < 2)
                        z = nums[i];
                }
                if(z!=INT_MIN)
                return z;
                else
                return -1;
            }
            else if (k == nums.size())
            {
                return large;
            }
            else if (k > 1 && k < nums.size())
            {
                if (nums[0] > nums[nums.size() - 1])
                {
                    if (freq[nums[0]] < 2)
                        return nums[0];
                    else if (freq[nums[nums.size() - 1]] < 2)
                        return nums[nums.size() - 1];
                }
                else
                {
                    if (freq[nums[nums.size() - 1]] < 2)
                        return nums[nums.size() - 1];
                    else if (freq[nums[0]] < 2)
                        return nums[0];
                }
            }
            return -1;
        }
};
