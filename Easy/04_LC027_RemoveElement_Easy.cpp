class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;                              // write position and count of kept elements

        for (int i = 0; i < nums.size(); i++) { // i reads every element
            if (nums[i] != val) {               // keep this element
                nums[k] = nums[i];              // copy it to the write position
                k++;                            // advance the write position
            }
            // if nums[i] == val, do nothing: it is skipped (removed)
        }
        return k;                               // number of elements not equal to val
    }
};