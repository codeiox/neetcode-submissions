class Solution {
public:
    bool hasDuplicate(vector<int>& nums) { 
        /* 
        Pesudo code:

        Sort array
        Example:
        [1, 2, 4, 5, 2] becomes [1, 2, 2, 4, 5]

        Test cases:
        
        [1, 2, 3, 4, 5] output: false
        [1, 2, 3, 4, 4, 5] output: true
        [1, 2, 3, 4, 5, 5, 5, 5] output: true
        

        start one variable at index 0
        another variable index current + 1

        Loop through array upto end - 1:
        if element at index (i=0) == element at (i+1) is true
            then return true
        else: 
            return false 

        */
        bool is_true = false;
        std::sort(nums.begin(), nums.end());
        int size_of_array = nums.size();
        for (int i = 0; i < size_of_array -1; ++i) {
            if (nums[i] == nums[i+1]) {
                is_true = true;
            } 
        }
        return is_true;
    }
};