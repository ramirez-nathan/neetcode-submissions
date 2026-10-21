class Solution {
public:
    // iterate through s and keep count of chars
    // 
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> map_s;
        std::unordered_map<char, int> map_t;

        for (const char& char_s : s) {
            map_s[char_s]++;
        }
        for (const char& char_t : t) {
            map_t[char_t]++;
        }
        if (map_s.size() != map_t.size()) return false;
        for (const auto& [c, freq] : map_s) {
            if (freq != map_t[c]) return false;
        }
        return true;
        
    }
};
