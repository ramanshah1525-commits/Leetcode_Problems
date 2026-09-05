class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int a=nums[0];
        int n=nums.size();

        for (int i = 0; i < n; i++) {
            a = gcd(a, nums[i]);
            if (a == 1) {
                return true;
            }
        }

        return a == 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna