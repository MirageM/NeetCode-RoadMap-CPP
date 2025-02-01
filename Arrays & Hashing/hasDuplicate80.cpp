class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hset;
        for(int i = 0; i < nums.size(); i++){
            if(hset.find(nums[i]) != hset.end()){
                return true;
            }
            hset.insert({nums[i], i});
        }
        return false;
    }
};
