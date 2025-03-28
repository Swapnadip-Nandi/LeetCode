class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1) return s;
        string ans = "";

        for(int i = 0; i < numRows; i++) {
            int x = (numRows - 1) * 2;
            if(i == 0 || i == numRows - 1) {
                int j = i;
                while(j < s.size()) {
                    ans += s[j];
                    j = j + x;
                }
            } else if((numRows % 2 != 0) && (i == ((numRows / 2)))) {
                int k = x / 2;
                int j = i;
                while(j < s.size()) {
                    ans += s[j];
                    j = j + k;
                }
            } else {
                int first = x - (2 * i);
                int second = x - first;
                int n = i;
                while(true) {
                    if(n < s.size()) {
                        ans += s[n];
                        n = n + first;
                        if(n < s.size()) {
                            ans += s[n];
                            n = n + second;
                        }
                        else {
                            break;
                        }
                    } else {
                        break;
                    }
                }
            }
        }
        return ans;
    }
};