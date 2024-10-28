class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int prefix = 1;
        for(int i = 0; i < n; i++){
            result[i] = prefix;
            prefix = prefix * nums[i];
        }
        int postfix = 1;
        for(int i = n - 1; i >= 0; i--){
            result[i] = postfix * result[i];
            postfix = postfix * nums[i];
        }
        return result;
    }
};
