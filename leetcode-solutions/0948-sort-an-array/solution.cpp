class Solution {
    public: vector < int > sortArray(vector < int > & nums)
    {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
    public: void mergesort(vector < int > &a, int left,int right)
    {
        if (left >= right)
        {
            return;
        }
        else
        {
            int mid = (left + right) / 2;
            mergesort(a, left, mid);
            mergesort(a, mid + 1, right);
            merge(a, left, mid, right);
        }
    }
    public: void merge(vector < int > &a, int left, int mid, int right)
    {
        vector < int > ash;
        int f = 0;
        int k = 0;
        vector < int > one;
        vector < int > two;

        for (int i = left; i <= mid; i++)
            one.push_back(a[i]);

        for (int i = mid + 1; i <= right; i++)
            two.push_back(a[i]);
        while (k < one.size() && f < two.size())
        {
            if (one[k] <= two[f])
            {
                ash.push_back(one[k]);
                k++;
            } else if (one[k] > two[f])
            {
                ash.push_back(two[f]);
                f++;
            }
        }
        while (k < one.size())
        {
            ash.push_back(one[k]);
            k++;
        }
        while (f < two.size())
        {
            ash.push_back(two[f]);
            f++;
        }
        for (int i = left; i <= right; i++)
        {
            a[i] = ash[i - left];
        }
    }
};
