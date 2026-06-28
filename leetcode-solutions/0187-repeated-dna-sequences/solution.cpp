class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        vector<string> ans;
        unordered_map<string,int> hash;
        for(int i=0;i+9<s.size();i++)
        {
            string check=s.substr(i,10);
            hash[check]++;
        }
        for(auto it=hash.begin();it!=hash.end();++it)
        {
            if(it->second>1)
            {
                ans.push_back(it->first);
            }
        }
        return ans;
        
    }
};
