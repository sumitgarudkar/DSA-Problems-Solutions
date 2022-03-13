class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
        for(char ch:s){
            switch(ch){
                case '(':
                    st.push('(');
                    break;
                case '[':
                    st.push('[');
                    break;
                case '{':
                    st.push('{');
                    break;
                case ')':
                    if(st.empty() || st.top()!='('){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                    break;
                case ']':
                    if(st.empty() || st.top()!='['){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                    break;
                case '}':
                    if(st.empty() || st.top()!='{'){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                    break;
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};