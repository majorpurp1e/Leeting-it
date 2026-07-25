class Solution {
public:
    string getHint(string secret, string guess) 
    {
        int bull=0;
        int cow=0;
        unordered_map<char,int> hash;
        for(int i=0;i<guess.length();i++)
        {
            if(guess[i]==secret[i])
            {
                bull++;
            }
            else
            {
                hash[secret[i]]++;
            }
            
        }
        for(int i=0;i<guess.length();i++)
        {
            if(guess[i]!=secret[i] && hash[guess[i]]>0)
            {
                cow++;
                hash[guess[i]]--;
            }
        }
        return to_string(bull)+"A"+to_string(cow)+"B";
    }
};
