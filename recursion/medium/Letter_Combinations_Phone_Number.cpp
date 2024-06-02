class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty()) {
            return ans;
        }
        helper(digits, ans, 0, "");
        return ans;
    }
     void helper(string &digits, vector<string> &ans, int i, string st) {
        vector<string> mp = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(i == digits.size()) {
            ans.push_back(st);
            return;
        }
        string s = mp[digits[i] - '0'];
        for(int k = 0; k < s.size(); ++k) {
            helper(digits, ans, i + 1, st + s[k]);
        }
    }
};



