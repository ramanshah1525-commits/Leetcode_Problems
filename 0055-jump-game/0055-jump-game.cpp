class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        for(int i=nums.size()-2; i>=0; i--){
            if(i+nums[i]>=n){
                n=i;
            }
        }
        return (n==0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna