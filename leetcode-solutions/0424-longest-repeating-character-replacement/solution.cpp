class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int ans=0;
        int maxfreq=0;
        int front=0;
        int back=0;
        vector<int> freq(26,0);
        while(front<s.size())
        {
            freq[s[front]-'A']++;
            maxfreq=max(maxfreq,freq[s[front]-'A']);
            while((front-back+1)-maxfreq>k)
            {
                ans=max(ans,front-back);
                freq[s[back]-'A']--;
                back++;
            }
            front++;
        }
        ans=max(ans,front-back);
        return ans;
        
    }
};
