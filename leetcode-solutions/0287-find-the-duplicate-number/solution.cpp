class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> hash;
        int i=0;
        while(i<nums.size())
        {
            if(hash.contains(nums[i])==1)
            {
                return nums[i];
            }else
            {
                hash[nums[i]]++;
                i++;
            }
        }
        return -1;
    }
};
