
https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    void solve(int open,int close, string op, vector<string> &res){
        if(close == 0 and open == 0){
            res.push_back(op);
            return;
        }
        if(open != 0){
            string op1 = op;
            op1.push_back('(');
            solve(open-1,close,op1,res);
        }
        if(close > open){
            string op2 = op;
            op2.push_back(')');
            solve(open,close-1,op2,res);
        }
    }
    vector<string> generateParenthesis(int n) {
        string op;
        vector<string> res;
        int open = n;
        int close = n;
        solve(open,close,op,res);
        return res;
    }
};