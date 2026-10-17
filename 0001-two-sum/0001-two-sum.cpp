class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr(n);
        for(int i = 0; i < n; i++) {
            arr[i] = {nums[i], i};
        }
        sort(arr.begin(), arr.end());
        int start = 0, end = n - 1;
        while(start < end) {
            int sum = arr[start].first + arr[end].first;
            if(sum == target) {
                return {arr[start].second, arr[end].second};
            }
            else if(sum < target) {
                start++;
            }
            else {
                end--;
            }
        }
        return {-1, -1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna