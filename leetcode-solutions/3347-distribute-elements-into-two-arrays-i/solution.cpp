class Solution
{
    public:
        vector<int> resultArray(vector<int> &nums)
        {
            if (nums.size() > 2)
            {
                vector<int> arr1;
                vector<int> arr2;
                arr1.push_back(nums[0]);
                arr2.push_back(nums[1]);
                int a1 = 0;
                int a2 = 0;
                for (int i = 2; i < nums.size(); i++)
                {
                    if (arr1[a1] > arr2[a2])
                    {
                        arr1.push_back(nums[i]);
                        a1++;
                    }
                    else
                    {
                        arr2.push_back(nums[i]);
                        a2++;
                    }
                }
                for (int i = 0; i < arr2.size(); i++)
                {
                    arr1.push_back(arr2[i]);
                }
                return arr1;
            }
            else
            {
                return nums;
            }
        }
};
