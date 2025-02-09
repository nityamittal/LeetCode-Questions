class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        bool flag = true;

        for(auto ch:s)
        {
            switch(ch)
            {
                case '(':
                case '[':
                case '{': st.push(ch);
                          break;
                case ')': if(!st.empty() and st.top()=='(')
                            st.pop();
                          else 
                            return false;
                          break;

                case ']': if(!st.empty() and st.top()=='[')
                            st.pop();
                          else 
                            return false;
                          break;

                case '}': if(!st.empty() and st.top()=='{')
                            st.pop();
                          else 
                            return false;
                          break;     

                default:

            }
        }
        return st.empty();
        
    }
    
};