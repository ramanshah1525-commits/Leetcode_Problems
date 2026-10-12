class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++){
            sum=sum+nums[i];
            v.push_back(sum);
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna