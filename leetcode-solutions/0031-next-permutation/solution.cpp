class Solution
{
    public:
        void nextPermutation(vector<int> &nums)
        {
            int flag = 0;
            int right = nums.size() - 1;
            int compare = nums[right];
            while (nums[right] >= compare && right > -1)
            {
                compare = nums[right];
                right--;
                if (right == -1)
                {
                    flag = 1;
                    break;
                }}
                if (flag == 1)
                {
                    sort(nums.begin(), nums.end());
                }
                else
                {
                    int k = 101;
                    int index = 101;
                    for (int i = right + 1; i < nums.size(); i++)
                    {
                        if (nums[i] < k && nums[i] > nums[right])
                        {
                            k = nums[i];
                            index = i;
                        }
                    }
                    k = nums[right];
                    nums[right] = nums[index];
                    nums[index] = k;
                    sort(nums.begin() + right + 1, nums.end());
                }
            }
        }
;
