class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> front;
        unordered_map<char, int> back;

        for (int i = 0; i < s.length(); i++) {
            front[s[i]]++;
            back[t[i]]++;
        }
        return front == back;
    }
};
