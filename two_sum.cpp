class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a, b;
        vector <int> ans;
        for(int i = 0; i < nums.size(); i++){
            a = target-nums[i]; //subtract current array value from target to get number needed
            auto c = std::find(nums.begin()+i+1, nums.end(), a); //std::find to check if that needed number is there
            if(c != end(nums)){ //if it is there, push them into vector
                ans.push_back(i);
                ans.push_back(c-nums.begin()); //iterator - begin iterator gives position
                return ans;
            }
        } return ans;
    }
};
