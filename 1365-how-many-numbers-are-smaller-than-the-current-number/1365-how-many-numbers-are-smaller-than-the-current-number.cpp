class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            v.push_back(count);
            count=0;
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna