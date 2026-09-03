class Solution
{
    public:
        bool uniformArray(vector<int> &nums1)
        {
            int parity = 0;
            int sub = -1;
            int mii = INT_MAX;
            for (int i = 0; i < nums1.size(); i++)
            {
                if (nums1[i] % 2 != 0)
                {
                    if (nums1[i] < mii)
                    {
                        mii = nums1[i];
                        sub = i;
                    }
                }
            }
            if (sub == -1)
                return true;
            else
            {
                for (int i = 0; i < nums1.size(); i++)
                {
                    if (nums1[i] % 2 != 0)
                    {
                        parity++;
                    }
                    else
                    {
                        if (nums1[i] > nums1[sub])
                        {
                            parity++;
                        }
                        else
                        {
                            parity = 0;
                            break;
                        }
                    }
                }
                if (parity == nums1.size())
                {
                    return true;
                }
                return false;
            }
        }
};
