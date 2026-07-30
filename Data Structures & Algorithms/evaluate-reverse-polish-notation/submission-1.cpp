class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string tk : tokens) {
            if (tk == "+") {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                st.push(b + a);
            }
            else if (tk == "-") {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                st.push(b - a);
            }
            else if (tk == "*") {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                st.push(b * a);
            }
            else if (tk == "/") {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                st.push(b / a);
            }
            else {
                st.push(stoi(tk));
            }
        }

        return st.top();
    }
};