class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1, idx=nums.size(), mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                idx=mid;
                break;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                idx=mid;
                end=mid-1;
            }
        }
        return idx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna