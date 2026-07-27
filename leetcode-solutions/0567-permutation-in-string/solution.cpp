class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s1.size()>s2.size())
        return false;
        else
        {
            vector<int> s11(26,0),s22(26,0);
            for(int i=0;i<s1.size();i++)
            {
                s11[s1[i]-'a']++;
                s22[s2[i]-'a']++;
            }
            int k=0;
            for(int i=s1.size()-1;i<s2.size();i++)
            {
                if(i!=s1.size()-1)
                {
                    s22[s2[i]-'a']++;
                }
                if(s11==s22)
                {
                    return true;
                }
                s22[s2[k++]-'a']--;
            }
            return false;
        }
    }
};
