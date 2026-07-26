class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>> hash;
        for(string s : strs)
        {
            string st=s;
            sort(st.begin(),st.end());
            hash[st].push_back(s);
        }
        vector<vector<string>> ans;
        int k=0;
        for(auto &it : hash)
        {
            ans.push_back(it.second);   
        }
        return ans;
    }
};
