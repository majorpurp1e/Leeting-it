class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            if(hash.contains(nums[i]))
            {
                if(i-hash[nums[i]]<=k)
                {hash.clear();
                return true;}
                hash[nums[i]]=i;
            }else
            {
                hash[nums[i]]=i;
            }
        }
        hash.clear();
        return false;
    }
};
