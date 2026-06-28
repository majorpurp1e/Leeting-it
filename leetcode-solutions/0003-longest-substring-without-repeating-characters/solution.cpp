class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int si = 0;
        int fs = 0;
        int flag = 0;
        if (s.size() == 0)
            return si;
        else if (s.size() == 1)
            return 1;
        else {
            int i=0;
            for (int flag = 0; flag < s.size() && i<s.size(); i++) 
            {
                if (hash.contains(s.at(i)) == true) {
                    hash.clear();
                    if (si > fs) {
                        fs = si;
                        si = 0;
                    }
                    si = 1;
                    flag++;
                    hash[s.at(flag)]++;
                    i=flag;
                    
                } else {
                    hash[s.at(i)]++;
                    si++;
                }
            }
            if (hash.size() > fs) {
                fs = hash.size();
            }
            return fs;
        }
    }
};
