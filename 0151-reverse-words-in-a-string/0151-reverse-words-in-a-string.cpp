class Solution {
public:
    string reverseWords(string s) {
        std::vector<char> result = {};
        bool beginning = true;

        for (int start = s.length() - 1; start >= 0; start--) {
            if (s[start] == ' ') continue;

            if (!beginning) {
                result.push_back(' ');
            }

            int end = start - 1;
            while (end >= 0 && s[end] != ' ') {
                end--;
            }

            for (int idx = end + 1; idx <= start; idx++) {
                result.push_back(s[idx]);
            }
            beginning = false;
            start = end;
        }
        return std::string(result.begin(), result.end());
    }
};