class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {
            vector<vector < int>> ans;
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++)
            {
                vector<int> subans(3, -1);
                int rem = 0 - nums[i];
                subans[0] = nums[i];
                int start = i + 1;
                int end = nums.size() - 1;
                if (i > 0 && nums[i] == nums[i - 1])
                    continue;
                while (start < end)
                {
                    if (nums[start] + nums[end] == rem)
                    {
                        subans[1] = nums[start];
                        subans[2] = nums[end];
                        ans.push_back(subans);
                        while (start < end && nums[start] == nums[start + 1])
                            start++;

                        while (start < end && nums[end] == nums[end - 1])
                            end--;

                        start++;
                        end--;
                    }
                    else if (nums[start] + nums[end] < rem)
                    {
                        start++;
                    }
                    else if (nums[start] + nums[end] > rem)
                    {
                        end--;
                    }
                }
            }

            return ans;
        }
};
