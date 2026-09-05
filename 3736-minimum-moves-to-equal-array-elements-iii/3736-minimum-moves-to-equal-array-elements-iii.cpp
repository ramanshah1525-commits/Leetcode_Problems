class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=INT_MIN;
        int step=0, count=0;
        for(int i=0; i<nums.size(); i++){
            if(mx<nums[i]){
                mx=nums[i];
            }
        }   
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<mx){
                step=mx-nums[i];
                count=count+step;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna