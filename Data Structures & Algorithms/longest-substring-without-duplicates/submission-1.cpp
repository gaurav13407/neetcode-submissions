class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>last(256,-1);
        int i=0;
        int maxSub=0;
        for(int j=0;j<s.size();j++){
            if(last[s[j]]!=-1){
                i=max(i,last[s[j]]+1);
            }
            last[s[j]]=j;
            maxSub=max(maxSub,j-i+1);
        }
        return maxSub;
    }
};
