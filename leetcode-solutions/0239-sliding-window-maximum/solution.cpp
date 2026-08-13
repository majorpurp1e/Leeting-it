class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        vector<int> ans;
        multiset<int> hash;
        int front=0;
        int back=0;
        while(front<nums.size())
        {
            if(hash.size()<k)
            {
                hash.insert(nums[front]);
                front++;
            }
            if(hash.size()==k)
            {
                ans.push_back(*hash.rbegin());
                hash.erase(hash.find(nums[back++]));
            }
        }
        return ans;
        
    }
};
