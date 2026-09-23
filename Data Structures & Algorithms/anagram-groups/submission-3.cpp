class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        for (const auto& s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            string key = "";
            for (int i = 0; i < count.size(); i++) {
                if (count[i] != 0) {
                    key.append(to_string(count[i]));
                    key.push_back(char('a' + i));
                }
            }
            anagrams[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& a : anagrams) {
            result.push_back(a.second);
        }
        
        return result;
    }
};
