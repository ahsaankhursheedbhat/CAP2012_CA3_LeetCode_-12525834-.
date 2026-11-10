class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;     // nothing to process

        int k = 1;                      // next write position; first element is always unique
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {   // found a new unique value
                nums[k] = nums[i];          // store it at the write position
                k++;                        // move the write position forward
            }
        }
        return k;                       // number of unique elements
    }
};