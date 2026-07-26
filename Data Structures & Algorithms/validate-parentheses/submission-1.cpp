class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char,char> mp;
        mp[')'] = '(';
        mp[']'] = '[';
        mp['}'] = '{';
        for(char a:s){
            if(mp.contains(a)){
                if(!st.empty() && st.top()==mp[a]){
                    st.pop();
                }
                else{
                    return false;
                }
            }else{
                st.push(a);
            }
        }
        if(st.empty()) return true;

        return false;
    }
};
