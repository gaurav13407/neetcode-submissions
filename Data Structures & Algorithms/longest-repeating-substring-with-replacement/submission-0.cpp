class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>st;
        int res=0;
        int i=0;
        int maxFreq = 0;
        for(int j=0;j<s.size();j++){
            st[s[j]]++;
            maxFreq = max(maxFreq, st[s[j]]);
            if((j-i+1)-maxFreq>k){
                st[s[i]]--;
                i++;
            }

            res=max(res,j-i+1);
        }
        return res;
    }
};
