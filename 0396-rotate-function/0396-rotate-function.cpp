class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long n=nums.size();
        long long sum=0;
        long long f0=0;
        for(int i = 0; i < n; ++i) {
            sum=sum+nums[i];
            f0=f0+(long long)i*nums[i];
        }
        long long max_val=f0;
        long long current_f=f0;
        for(int k = 1; k < n; ++k){
            current_f=current_f+sum-n*nums[n-k];
            max_val = std::max(max_val, current_f);
        }
        return max_val;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna