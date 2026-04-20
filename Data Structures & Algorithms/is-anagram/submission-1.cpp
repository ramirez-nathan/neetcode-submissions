class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;
        for (char i : s) {
            sMap[i]++;
        }
        for (char i : t) {
            tMap[i]++;
        }
        return sMap == tMap;
    }
};
