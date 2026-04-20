/*
given array of int nums and int target
find index i and j of nums where nums[i]+nums[j] == target
    i != j
    assume there is always a solution
    target - nums[i] = nums[j]
    return smaller index first
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // val, index
        unordered_map<int,int> map;
        for (int i = 0; i < nums.size(); ++i) 
        {
            int diff = target - nums[i];
            if (map.contains(diff)) {
                        //    j    , i
                return { map[diff], i };
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
