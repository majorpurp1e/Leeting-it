class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        unordered_map<int,int> hash;
        vector<int> ans=arr;
        sort(ans.begin(),ans.end());
        int rank=1;
        for(int i=0;i<arr.size();i++)
        {
            if(!hash.contains(ans[i]))
            {
                hash[ans[i]]=rank++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=hash[arr[i]];
        }
        return arr;
    }
};
