class Solution
{
    public:
        int missingInteger(vector<int> &nums)
        {
            unordered_set<int> hash;
            int total = nums[0];
            if (nums.size() > 1)
            {
                for (int j = 1; j < nums.size(); j++)
                {
                    if (nums[j] - 1 == nums[j - 1])
                    {
                        total = total + nums[j];
                    }
                    else 
                    {
                        break;
                    }
                }
            }
            for(int i=0;i<nums.size();i++)
            {
                hash.insert(nums[i]);
            }
            while(hash.contains(total))
            {
                total++;
            }
            return total;
        }

};
