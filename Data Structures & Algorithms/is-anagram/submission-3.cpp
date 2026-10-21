class Solution {
public:
    // iterate through s and keep count of chars
    // 
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> freq_s;
        std::unordered_map<char, int> freq_t;

        if (s.length() != t.length()) return false;

        for (int i = 0; i < s.length(); ++i) {
            freq_s[s[i]]++;
            freq_t[t[i]]++;
        }
        return freq_s == freq_t;
        // runtime O(s+t), space O(1) B/C a word has at most 26 diff characters
    }
};
