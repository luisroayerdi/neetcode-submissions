class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        for (const auto& i : nums) {
            frequency[i]++;
        }

        vector<vector<int>> boxes(nums.size()+1);
        for (const auto& f : frequency) {
            boxes[f.second].push_back(f.first);
        }

        vector<int> result;

        for (int j = boxes.size() - 1; j >= 0; j--) {
            for (int g = 0; g < boxes[j].size(); g++) {
                if (result.size() == k) {
                    return result;
                }
                result.push_back(boxes[j][g]);
            }
        }
        return result;
    }
};
