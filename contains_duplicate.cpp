//checks for duplicate in an array

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> temp; //temp vect
        for(int i = 0; i < nums.size(); i++){ //check each element in given vect
            auto found = std::find(temp.begin(), temp.end(), nums[i]); //return iterator to duplicate or last element
            //https://cplusplus.com/reference/algorithm/find/ <- found std::find here 
            if(found != end(temp)){ //if found != last element (iterator pointer to beyond vect) there is a dupe
                return true;
            } else{
                temp.push_back(nums[i]); //else push current number onto temp vect
            }
        } return false;
    }
};
