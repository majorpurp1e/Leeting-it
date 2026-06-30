class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        if (s.size() < 3) {
            return count;
        } else {
            int startleft = 0;
            int startright = 0;
            int left = 0;
            int right = 0;
            unordered_map<char, int> hash;
            hash['a'] = 0;
            hash['b'] = 0;
            hash['c'] = 0;
            while (right < s.size()) {
                hash[s.at(right)]++;
                while (hash['a'] > 0 && hash['b'] > 0 && hash['c'] > 0) {
                    count = count + s.size() - right;
                    hash[s.at(left)]--;
                    left++;
                } {
                    right++;
                }
            }
            return count;
        }
    }
};
