class Solution {
public:
    // with anagrams, we can use a map to get the frequency of each string
    // and compare that with another potential anagram
    // nested loop
    
    /* 
    problem -> we need a key that anagrams can share
    unordered_map <key, vector<string>> str_map;
    vector<vector<string>> res;
    loop through strs
       sorted_str = string sorted 
       str_map[sorted_str].push_back(str)
    loop through str_map
        res.push_back(value)
    return res
    */
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<vector<string>> result {};
        std::unordered_map <string, vector<string>> str_map;
        for (const auto& str : strs) {
            std::string sorted_str {str};
            std::sort(sorted_str.begin(), sorted_str.end());
            str_map[sorted_str].push_back(str);
        }
        for (const auto& [key, group] : str_map) {
            result.push_back(group);
        }
        return result;
    }   
};
