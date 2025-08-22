
class Solution

{
    public:
    //Function to check if brackets are balanced or not.
    bool isBalanced(string x)
    {
        // Your code here
        stack<int> st;
        if(x[0] == '}' || x[0] == ')' || x[0] == ']') return false;
        for(auto i:x){
            if(i == '}' || i == ']' || i == ')'){
                if(st.empty()) return false;
                if((i == '}' && st.top() == '{') || (i == ']' && st.top() == '[') || (i == ')' && st.top() == '(')){
                    st.pop();
                }
                else return false;
            }
            else st.push(i);
        }
        if(st.empty()) return true;
        return false;
    }

};
