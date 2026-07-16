class Solution
{
    public:
        long long gcdSum(vector<int> &nums)
        {
            vector<int> prefixGcd;
            int ele = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] > ele)
                    ele = nums[i];
                prefixGcd.push_back(gcd(nums[i], ele));
            }
            sort(prefixGcd.begin(), prefixGcd.end());
            int i = 0;
            int j = prefixGcd.size() - 1;
            long sum = 0;
            while (j > i)
            {
                sum = sum + gcd(prefixGcd[i], prefixGcd[j]);
                i++;
                j--;
            }
            return sum;
        }
};
