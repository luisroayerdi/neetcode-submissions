
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> count;

        for (int i = 0; i<nums.size(); i++) {
            count.insert(nums[i]);
        }

        if (count.size() == nums.size()) {
            return false;
        }
        
        return true;
    }
};