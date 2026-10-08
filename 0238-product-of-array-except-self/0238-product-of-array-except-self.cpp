class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        int first_half=1, second_half=1;
        for(int i=0; i<nums.size(); i++){
            ans[i]=ans[i]*first_half;
            first_half=first_half*nums[i];
        }
        for(int i=nums.size()-1; i>=0; i--){
            ans[i]=ans[i]*second_half;
            second_half=second_half*nums[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna