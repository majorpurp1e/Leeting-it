class Solution
{
    public:
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
            if (nums1.size() > nums2.size())
            {
                return findMedianSortedArrays(nums2, nums1);
            }
            int end = nums1.size();
            int start = 0;
            int left1;
            int left2;
            int right1;
            int right2;
            while (start <= end)
            {
                int mid1 = (start + end) / 2;
                int mid2 = ((nums1.size() + nums2.size() + 1) / 2) - mid1;
                if (mid1 == 0)
                {
                    left1 = INT_MIN;
                }
                else
                {
                    left1 = nums1[mid1 - 1];
                }
                if (mid2 == 0)
                {
                    left2 = INT_MIN;
                }
                else
                {
                    left2 = nums2[mid2 - 1];
                }
                if (mid1 == nums1.size())
                {
                    right1 = INT_MAX;
                }
                else
                {
                    right1 = nums1[mid1];
                }
                if (mid2 == nums2.size())
                {
                    right2 = INT_MAX;
                }
                else
                {
                    right2 = nums2[mid2];
                }
                if (left1 <= right2 && left2 <= right1)
                {
                    break;
                }
                else if (left1 > right2 && left2 <= right1)
                {
                    end = mid1 - 1;
                }
                else
                {
                    start = mid1 + 1;
                }
            }
            if ((nums1.size() + nums2.size()) % 2 == 0)
            {
                return (double(min(right1, right2) + max(left1, left2)) / 2);
            }
            else
            {
                return max(left1, left2);
            }
        }
};
