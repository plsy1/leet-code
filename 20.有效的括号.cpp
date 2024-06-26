/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            } else {
                if (stk.empty()) {
                    return false;
                }
                char topChar = stk.top();
                if ((c == ')' && topChar != '(') || 
                    (c == ']' && topChar != '[') || 
                    (c == '}' && topChar != '{')) {
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }
};
// @lc code=end

