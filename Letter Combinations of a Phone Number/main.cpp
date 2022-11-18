class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> s;
        unordered_map<char, string> m;
        m.insert({'1', ""});
        m.insert({'2', "abc"});
        m.insert({'3', "def"});
        m.insert({'4', "ghi"});
        m.insert({'5', "jkl"});
        m.insert({'6', "mno"});
        m.insert({'7', "pqrs"});
        m.insert({'8', "tuv"});
        m.insert({'9', "wxyz"});
        
        vector<string> ans;
        if(digits.length() == 0) return ans;
        string temp(digits.length(), ' ');
        com(temp, digits, 0, ans, m);
        
        
        return ans;
    }
    void com(string& temp, string dig, int ind, vector<string>& ans, unordered_map<char, string>& m){
        if(ind == dig.length()){
            ans.push_back(temp);
            return;
        }
        for(char c:m[dig[ind]]){
            temp[ind] = c;
            com(temp, dig, ind+1, ans, m);
        }
    }
    
};