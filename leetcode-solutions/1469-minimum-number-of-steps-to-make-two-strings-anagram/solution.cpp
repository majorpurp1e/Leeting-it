class Solution {
public:
    int minSteps(string s, string t) 
    {
        int steps=0;
        unordered_map<char,int> hash;
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(hash.contains(t[i]))
            {
                hash[t[i]]--;
                if(hash[t[i]]==0)
                {
                    hash.erase(t[i]);
                }
            }
        }
        if(!hash.empty())
        {
            for(auto it=hash.begin();it!=hash.end();it++)
            {
                steps=steps+it->second;
            }
        }
        return steps;
    }
};
