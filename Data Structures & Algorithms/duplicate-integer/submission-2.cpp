class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> list;
        bool has_duplicate = false;
        for (int i = 0; i < nums.size(); ++i) {
            if (list.find(nums[i]) == list.end()) {
                list.insert(nums[i]);
            } else {
                if (list.count(nums[i]) == 1) {
                    has_duplicate = true;
                }
            }
        }
        return has_duplicate;
    }
};