class Solution {
public:
    bool isValid(string s) {
        stack<char> k;
        for(int i=0;i<s.length();i++){
            switch(s[i]){
                case '(': k.push(')');break;
                case '{': k.push('}');break;
                case '[': k.push(']');break;
                default: if(k.size()==0||s[i]!=k.top()){
                    return false;
                }
                else{
                    k.pop();
                }
            }
        }
        if(k.size()==0)
            return true;
        else 
            return false;
    }
};
