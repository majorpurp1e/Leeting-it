class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) 
    {
        vector<int> prefmax;
        vector<int> suffmin;
        int z=nums.size()-1;
        prefmax.push_back(nums[0]);
        suffmin.push_back(nums[z]);
        int topa=0;
        int topb=0;
        for(int i=1;i<nums.size();i++)
        {
            int x=max(prefmax[topa++],nums[i]);
            prefmax.push_back(x);
            int y=min(suffmin[topb++],nums[z-i]);
            suffmin.push_back(y);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(prefmax[i]-suffmin[z-i]<=k)
            return i; 
        }
        return -1;
    }
};
