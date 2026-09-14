class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> s1;
        map<char,int> s2;
        if(s.size() != t.size()) return false;
        for(int i = 0 ; i<s.size(); i++){
            s1[s[i]]++;
            s2[t[i]]++;
        }
        for (const auto& [ch, num] : s1) {
            if(num != s2[ch]) return false;
        }
        return true;
    }
};
