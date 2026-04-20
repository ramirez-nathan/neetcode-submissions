/*
return length() of longest consecutive seq 
consecutive:
    element is EXACTLY 1 more than prev element
cant sort it
i WILL store it
    set of elements
    Loop thru nums
    if set doesn't contain element already
        insert element to set
        if set contains element - 1 
            increment length
    else 
        continue
order does not matter
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int longest {0};
        set<int> numSet;
        numSet.insert(nums.begin(), nums.end());
        for (int num : numSet) 
        {
            int length {0};
            if (!numSet.contains(num-1)) {
                length = 1;
                int val = num;
                while (numSet.contains(val+1)) {
                    length++;
                    val++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
        
    
    }
};
