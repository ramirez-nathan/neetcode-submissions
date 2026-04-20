class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.find(nums[i]) != m.end()) { // if find returns an index that is not end() index, then duplicate
                return true;
            }
            m.insert(nums[i]);
        }
        return false;
    }
};
