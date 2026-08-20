class Solution {
public:

    bool checkPalindrome(int start, string &s, int n) {
        if (start >= n / 2)
            return true;

        if (s[start] != s[n - start - 1])
            return false;

        return checkPalindrome(start + 1, s, n);
    }

    bool isPalindrome(string s) {
        string given = "";

        for (char k : s) {
            if (isalnum(k)) {
                given += tolower(k);
            }
        }

        return checkPalindrome(0, given, given.size());
    }
};