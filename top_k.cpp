class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> u_map; //create map for storing key, values
        vector<int> largest_arr; //array to return
        int count = 1; //keep track of how many numbers have appeared
        for(int i = 0; i < nums.size(); i++){
            if(u_map.find(nums[i]) == u_map.end()){ //if num is already present in the map, skip! (this check is for saving time)
                for(int j = 1; j < nums.size(); j++){ //check every number after current pos for matches, if it's a match, count+1;
                    if(nums[j] == nums[i]){
                        count += 1;
                    }
                }
                u_map.insert({nums[i], count}); //after counting, insert into map with {number, count}
                count = 0; //reset count to 0;
            }
        }

        while(k > 0){
            int max = 0, max_pos; //max tracks MAX count, and max_pos tracks key value for the MAX count;
            for(const auto& elem : u_map){ //for all elements in map
                if(elem.second > max){ //if current pos in maps value is greater than max value, max_pos = elems key & max = value of key
                    max_pos = elem.first;
                    max = elem.second;
                }
            }
            largest_arr.push_back(max_pos); //push max_pos onto returned array
            u_map.erase(max_pos); //remove max pos from map, so we wont hit it next time around.
            k-=1; //subtract 1 from remaining checks
        } 
        return largest_arr; //return array with k many largest values
    } 
};
