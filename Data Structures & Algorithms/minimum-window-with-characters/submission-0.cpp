class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;

        // Count frequency of characters in t
        for (char c : t)
            need[c]++;

        int required = need.size();   // Number of unique chars needed
        int formed = 0;

        unordered_map<char, int> window;

        int left = 0, right = 0;
        int minLen = INT_MAX;
        int start = 0;

        while (right < s.size()) {
            char c = s[right];
            window[c]++;

            // Check if current character satisfies its required count
            if (need.count(c) && window[c] == need[c])
                formed++;

            // Try shrinking the window
            while (left <= right && formed == required) {

                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char ch = s[left];
                window[ch]--;

                if (need.count(ch) && window[ch] < need[ch])
                    formed--;

                left++;
            }

            right++;
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};