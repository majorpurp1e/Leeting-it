class Solution
{
    public:
        int maximumLengthSubstring(string s)
        {
            int ans=0;
            vector<int> hash(26, 0);
            int front = 0;
            int back = 0;
            while (front < s.size())
            {
                hash[s[front] - 'a']++;
                while(hash[s[front] - 'a']>2)
                {
                    ans=max(ans,front-back);
                    hash[s[back] - 'a']--;
                    back++;
                }
                front++;
            }
            ans=max(ans,front-back);
            return ans;
        }
};
