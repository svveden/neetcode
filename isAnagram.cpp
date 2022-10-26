class Solution {
public:
    bool isAnagram(string s, string t) {
    //     for(int i = 0; i < t.length(); i++){ //my original code, leetcode gave me TLE for 3 of the 37 test cases, so I got second solution
    //         auto temp = std::find(s.begin(), s.end(), t[i]);
    //         if(std::count(s.begin(), s.end(), t[i]) != std::count(t.begin(), t.end(), t[i])){
    //             return false;
    //         }
    //         else if(s.length() != t.length()){
    //             return false;
    //         }
    //     } return true;
    // }
        if(s.length() != t.length()){
            return false;
        }
        vector<int> vect(26);
        for(int i = 0; i < s.size(); i++){
            vect[s[i]-'a']++;
        }
        for(int i = 0; i < t.size(); i++){
            vect[t[i]-'a']--;
        }
        for(int i = 0; i < t.size(); i++){
            if(vect[t[i]-'a'] < 0){
                return false;
            }
        }
        
        return true;
    }
};
