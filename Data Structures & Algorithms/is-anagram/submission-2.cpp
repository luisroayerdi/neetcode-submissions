class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> frequency(26, 0);

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            frequency[c - 'a']++;
        }

        for (int i = 0; i < t.size(); i++) {
            char c = t[i];
            frequency[c - 'a']--;
        }

        for (int i = 0; i < frequency.size(); i++) {
            if (frequency[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
