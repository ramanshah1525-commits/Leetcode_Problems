class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            nums[i]=start+2*i;
        }
        int ans=nums[0];
        for(int i=1; i<n; i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna