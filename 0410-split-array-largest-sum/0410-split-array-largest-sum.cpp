class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=0,high=0;
        for (int x:nums) {
            low=max(low,x);
            high=high+x;
        }
        while(low<high){
            int mid =low+(high-low)/2;
            int pieces=1,sum=0;
            for(int x:nums){
                if(sum+x>mid){
                    pieces++;
                    sum=x;
                }else{
                    sum=sum+x;
                }
            }
            if(pieces>k){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna