class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int max=0;
        int a=0;int b=nums.size()-1;
        while(a<b)
        {
            if(max<(nums[a]+nums[b]))
            max=nums[a++]+nums[b--];
            else {
                a++;b--;
            }
        }
        return max;
    }
};
