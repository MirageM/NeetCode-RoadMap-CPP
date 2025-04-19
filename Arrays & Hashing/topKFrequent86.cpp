class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> freq(nums.size() + 1);
        unordered_map<int, int> count;
        for(int n: nums){
            count[n] = 1 + count[n];
        }
        for(auto& entry: count){
            freq[entry.second].push_back(entry.first);
        }
        vector<int> result;
        for(int i = freq.size() - 1; i > 0; i--){
            for(int n: freq[i]){
                result.push_back(n);
                if(result.size() == k){
                    return result;
                }
            }
        }
        return result;

    }
};
