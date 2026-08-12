class Solution
{
    public:
        int maxSubarrayLength(vector<int> &nums, int k)
        {
            int size = 0;
            if (nums.size() > 1)
            {
                int front = 0;
                int back = 0;
                unordered_map<int, int> hash;
                while (front < nums.size())
                {
                    if (hash[nums[front]] < k)
                    {
                        hash[nums[front]]++;
                        front++;
                    }
                    else
                    {
                        size = max(size, (front - back));
                        hash[nums[back]]--;
                        back++;
                    }
                }
                size = max(size, (front - back));
                return size;
            }
            else
            {
                return nums.size();
            }
        }
};
