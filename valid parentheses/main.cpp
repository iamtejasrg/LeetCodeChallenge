class Solution {
public:
    bool isValid(string s) {
        stack <int> st;
        for(char i: s){
            if(i == '(') st.push(1);
            else if(i == '{') st.push(2);
            else if(i == '[') st.push(3);
            else if(st.empty()) return false;
            else if(i == ')'){
                if(st.top() == 1) st.pop();
                else return false;
            }
            else if(i == '}'){
                if(st.top() == 2)st.pop();
                else return false;
            }
            else if(i == ']') {
                if(st.top() == 3)st.pop();
                else return false;
            }
        }
        if(!st.empty()) return false;
    
        return true;
        
    }
};