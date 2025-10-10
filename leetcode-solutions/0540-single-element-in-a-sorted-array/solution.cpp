class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int out=-1;
        for(int i=0;i<nums.size();i=i+2)
        {
            if(nums.size()>1 && ((i+1)%2)!=0)
            {
                if(nums[i]!=nums[i+1])
                {
                  out=nums[i];
                  break;  
                }else if(nums[i]==nums.size()-1)
                {
                out=-1;
                }
            }else if(nums.size()==1)
            {
                out=nums[0];
                break;
            }
        }   
        return out;
    }
};
