class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Naive approach using nested loop

        // Nested loop: i and j
            // if nums at i + number at j == target 
                // then output: indices of i and j
            // else advance the inner loop and repeat process
        size_t arr_size = nums.size();
        std::vector<int> vec_return;
        for (int i = 0; i < arr_size - 1; ++i) {
            for (int j = i + 1; j < arr_size; ++j) {
                if (nums[i] + nums[j] == target) {
                    vec_return.push_back(i);
                    vec_return.push_back(j);
                    return vec_return;
                }
            }
        }
    }
};
