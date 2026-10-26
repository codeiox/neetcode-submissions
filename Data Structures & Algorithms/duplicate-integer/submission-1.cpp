class Solution {
public:
    bool hasDuplicate(vector<int>& nums) { 
        /* 
        Pesudo code:

        Sort array
        Example:
        [1, 2, 4, 5, 2] becomes [1, 2, 2, 4, 5]

        Test cases:
        [empty] output: false
        [1, 2, 3, 4, 5] output: false
        [1, 2, 3, 4, 4, 5] output: true
        [1, 2, 3, 4, 5, 5, 5, 5] output: true
        

        start one variable at index 0
        another variable index current + 1

        declare bool var and set to false initially.

        Loop through array upto end - 1:
            if element at index i == element at (i+1)
                assgin true 

        return asign variable after loop ends
        */
        bool is_true = false;
        std::sort(nums.begin(), nums.end());
        int size_of_array = nums.size();

        if (size_of_array == 0) {
            is_true = false;
        }

        for (int i = 0; i < size_of_array -1; ++i) {
            if (nums[i] == nums[i+1]) {
                is_true = true;
            } 
        }
        return is_true;
    }
};