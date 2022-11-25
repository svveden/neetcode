class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> subs;
        int subsCount = 0, largestSub = 1, cur_pos = 0;
        if(s.length() < 1){ //edgecase
            return 0;
        }
        for(int i = 0; i < s.length(); i++){
            if(subs.find(s[i]) == subs.end()){ //check if map has key pair
                subs.insert(pair<char, int>(s[i], 1)); //if it doesnt, add it, increase size of substring, and check if its the largest
                subsCount++;
                if(subsCount > largestSub){
                    largestSub = subsCount;
                }
            } else{
                subs.clear(); //empty the map, reset subscount and set the current pos to back to the next pos
                subsCount = 0;
                cur_pos+=1;
                i = cur_pos-1;
            }
        }  return largestSub;
    }
};
