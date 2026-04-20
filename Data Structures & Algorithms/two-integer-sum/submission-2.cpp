class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool ansFound = false;
        vector<int> ans {0,0};
        for (int i = 0; i < nums.size()-1; i++) {
            for(int j = 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target && (i != j)) {
                    ansFound = true;
                    ans = {i,j};
                    break;
                }
            }
            if (ansFound == true) break;
        }
        return ans;
    }
};
