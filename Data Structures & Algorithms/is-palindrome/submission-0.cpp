class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            if (isalnum(s[left]) == false) {
                left++;
                continue;
            }
            if (isalnum(s[right]) == false) {
                right--;
                continue;
            }
            if (tolower(s[right]) != tolower(s[left])) {
                return false;
            }
            right--;
            left++;            
        }
        return true;
    }
};
