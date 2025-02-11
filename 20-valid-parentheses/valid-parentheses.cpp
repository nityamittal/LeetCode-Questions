class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;

        for(auto ch:s)
        {
            if(ch=='(' or ch=='{' or ch=='[')
            {
                st.push(ch);
            }
            if(ch==')' or ch=='}' or ch==']')
            {
                if(st.empty())
                return false;
                else
                {
                    if(ch==')')
                    {
                        if(st.top()=='(')
                        st.pop();
                        else
                        return false;
                    }
                    if(ch=='}')
                    {
                        if(st.top()=='{')
                        st.pop();
                        else
                        return false;
                    }
                    if(ch==']')
                    {
                        if(st.top()=='[')
                        st.pop();
                        else
                        return false;
                    }
                }
            }
        }
        return st.empty();
        
    }
};