class Solution
{
    public:
        vector<int> pivotArray(vector<int> &nums, int pivot)
        {
            vector<int> ret;
            if (nums.size() > 0)
            {
                for (int i = 0; i < nums.size(); i++)
                {
                    if (nums[i] < pivot)
                    {
                        ret.push_back(nums[i]);
                        
                    }
                }
            }
            if (nums.size() > 0)
            {
                for (int i = 0; i < nums.size(); i++)
                {
                    if (nums[i] == pivot)
                    {
                        ret.push_back(nums[i]);
                        
                    }
                }
            }
            if (nums.size() > 0)
            {
                for (int i = 0; i < nums.size(); i++)
                {
                    if (nums[i] > pivot)
                    {
                        ret.push_back(nums[i]);
                        
                    }
                }
            }
            return ret;
        }
};
