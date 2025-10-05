class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> negative;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                negative.push_back(nums[i]);
            }
        }
        int flag=0;
        int num=0;
        int neg=0;
        int i=0;
        vector<int> newret;
        while(nums.size()>i)
        {
            if(nums[i]>0)
            {
                newret.push_back(nums[i++]);
                newret.push_back(negative[neg++]);
            }else 
            {i++;}
        }
        return newret;
    }
    
};
