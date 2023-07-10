class Solution {
public:
    int longestSubstring(string s, int k) {
        int maxLength = 0;
    int n = s.length();

    for (int numUniqueChars = 1; numUniqueChars <= 26; numUniqueChars++) {
        std::unordered_map<char, int> frequencyMap;
        int left = 0, right = 0;
        int uniqueChars = 0;
        int charCountAtLeastK = 0;

        while (right < n) {
            frequencyMap[s[right]]++;
            if (frequencyMap[s[right]] == 1) {
                uniqueChars++;
            }
            if (frequencyMap[s[right]] == k) {
                charCountAtLeastK++;
            }
            right++;

            while (uniqueChars > numUniqueChars) {
                frequencyMap[s[left]]--;
                if (frequencyMap[s[left]] == 0) {
                    uniqueChars--;
                }
                if (frequencyMap[s[left]] == k - 1) {
                    charCountAtLeastK--;
                }
                left++;
            }

            if (uniqueChars == numUniqueChars && uniqueChars == charCountAtLeastK) {
                maxLength = std::max(maxLength, right - left);
            }
        }
    }

    return maxLength;
    }
};