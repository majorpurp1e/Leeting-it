class Solution
{
    public:
        int longestOnes(vector<int> &nums, int k)
        {
            int fsize = 0;
            int size = 0;
            int head = 0;
            int back = 0;
            while (head < nums.size())
            {
                if (nums[head] == 1)
                {
                    size++;
                    head++;
                }
                else
                {
                    if (k > 0)
                    {
                        size++;
                        head++;
                        k--;
                    }
                    else
                    {
                        if (size > fsize)
                            fsize = size;
                        if (nums[back] == 0)
                        {
                            k++;
                            size = head - back-1;
                        }
                        back++;
                    }
                }
            }
            return max(size,fsize);
        }
};
