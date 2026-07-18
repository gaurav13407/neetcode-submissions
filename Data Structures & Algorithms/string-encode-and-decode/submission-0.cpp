class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(string st:strs){
            s+=to_string(st.size())+'#'+st;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        int j;
        while(i<s.size()){
            j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,len);
            ans.push_back(word);
            i=j+1+len;
        }
        return ans;
    }
};
