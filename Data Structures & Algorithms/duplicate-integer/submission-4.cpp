class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> list;
        for (int i = 0; i < nums.size(); ++i) {
            if (list.find(nums[i]) == list.end()) {
                list.insert(nums[i]);
            } else {
                list.count(nums[i]) == true;
                    return true;
            }
        }
        return false;
    }
};