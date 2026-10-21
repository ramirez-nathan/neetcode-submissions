class Solution {
public:
    // nums[i] + nums[j] == target
    // nums[j] == target - nums[i]
    // diff == nums[j]
    // target_diff <diff, index> 
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map <int,int> target_diff; 
        for (int index = 0; index < nums.size(); ++index) {
            if (target_diff.count(nums[index])) { // if we found the difference 
                return {target_diff[nums[index]], index};
            }
            int diff {target - nums[index]};
            target_diff[diff] = index; 
        }
    }
};
