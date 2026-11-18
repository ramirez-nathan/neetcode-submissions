/*
given array int nums return 

map that has num, freq
BUCKET SORT
make an array in which each element is a bucket with corresponding frequency number 
(can be easily made by setting its initial size to nums.size()+1)
then iterate through nums and drop the corresponding number to their bucket
then make a result vector 
- iterate through array and at each bucket, insert a number(s) until array size equal to k
*/



class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        vector<vector<int>> freqBuckets(nums.size() + 1);
        for (int num : nums) 
        {
            freqMap[num]++;
        }
        
        for (const auto& [num,freq] : freqMap) 
        {
            freqBuckets[freq].push_back(num);
        }

        vector<int> result;
        for (int i = freqBuckets.size() - 1; i > 0; --i) 
        {
            for (int num : freqBuckets[i]) 
            {
                result.push_back(num);
                if (result.size() == k) return result;
            }
        }
        return result;
    }
};
