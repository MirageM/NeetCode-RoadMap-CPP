class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int prefix = 1;
        for(int i = 0; i < nums.size(); i++){
            result[i] = prefix;
            prefix = nums[i] * prefix;
        }
        int postfix = 1;
        for(int i = n - 1; i >= 0; i--){
            result[i] = result[i] * postfix;
            postfix = nums[i] * postfix;
        }
        return result;
    }
};
