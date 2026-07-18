class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int large=-1;
        int small=1001;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>large)
            large=nums[i];
            if(nums[i]<small)
            small=nums[i];
        }
        return gcd(large,small);
    }
};
