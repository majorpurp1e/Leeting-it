class Solution {
public:
    string smallestPalindrome(string s) 
    {
        sort(s.begin(),s.begin()+s.size()/2);
        string x=s.substr(0,s.size()/2);
        string en=x;
        reverse(x.begin(),x.end());
        if(s.size()%2==0)
        {
            return en+x;
        }
        else
        {
            return en+s.substr(s.size()/2,1)+x;
        }
    }
};
