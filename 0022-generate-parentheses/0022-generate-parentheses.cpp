class Solution {
public:

    void findAllPara(int open, int close, int n, string ds, vector<string>&ans){
        if (open == n && close == n) {
            ans.push_back(ds);
            return;
        }
        if (open < n) {
            findAllPara(open + 1, close, n, ds + '(', ans);
        }
        if (close < open) {
            findAllPara(open, close + 1, n, ds + ')', ans);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        int open =0; int close=0;
        vector<string>ans;
        findAllPara(open,close,n,"",ans);
        return ans;
    }
};