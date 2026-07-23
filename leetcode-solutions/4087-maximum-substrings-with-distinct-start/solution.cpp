class Solution {
public:
    int maxDistinct(string s) 
    {
        int k=0;
        unordered_map<char,int> hash;
        for(int i=0;i<s.size();i++)
        {
            if(!hash.contains(s[i]))
            {
                hash[s[i]]++;
                k++;
            }
        }
        return k;
        
    }
};
