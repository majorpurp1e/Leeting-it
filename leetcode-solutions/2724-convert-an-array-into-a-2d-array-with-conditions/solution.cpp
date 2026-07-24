class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        int maxx=0;
        for(auto it=hash.begin();it!=hash.end();it++)
        {
            maxx=max(maxx,it->second);
        }
        vector<vector<int>> second(maxx);
        int i=0;
        while(!hash.empty())
        {
            for(auto it=hash.begin();it!=hash.end();)
            {
                second[i].push_back(it->first);
                it->second--;
                if(it->second==0)
                {
                    it = hash.erase(it);
                }
                else
                {
                    it++;
                }
            }
            i++;
        }
        return second;
    }
};
