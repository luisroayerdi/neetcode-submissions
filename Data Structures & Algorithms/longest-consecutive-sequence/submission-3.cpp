class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(), nums.end());
        int best = 0;
        for (int x : nums_set) {
            if (nums_set.count(x-1) == 0) {
                int count = 1;
                while (nums_set.count(x+1) != 0) {
                    count += 1;
                    x++;
                }
                if (best < count) {
                    best = count;
                }
            } 
        }
        return best; 
    }
};
