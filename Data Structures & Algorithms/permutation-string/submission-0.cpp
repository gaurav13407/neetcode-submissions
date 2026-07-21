class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
             return false;
        }
        
        vector<int>a1(26,0);
        vector<int>a2(26,0);
        for(int i=0;i<s1.size();i++){
            a1[s1[i]-'a']++;
            a2[s2[i]-'a']++;
        }
        if (a1 == a2)  return true;

        for(int i=s1.size();i<s2.size();i++){
            a2[s2[i]-'a']++;
            a2[s2[i-s1.size()]-'a']--;
            if (a1 == a2)  return true;
        }
       return false;
        }
};
