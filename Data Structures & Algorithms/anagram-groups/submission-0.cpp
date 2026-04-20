// anagram - set, check if sets are equal comparison == 
// group all anagrams in sublists
// have a big vector<vector<string>> result
// make a map of sorted word, vector of original words
/* loop thru strs
        placeholder string for s
        sort placeholder
        map[placeholder].push_back(s)
   loop thru map
    result.pushback(s.second)
    add vector to result
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;
        for (const auto& s : strs) 
        {
            string word = s;
            sort(word.begin(), word.end());
            mp[word].push_back(s);
        }
        for (const auto& s : mp) 
        {
            result.push_back(s.second);
        }
        return result;
    }
};
