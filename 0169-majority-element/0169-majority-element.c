int majorityElement(int* nums, int numsSize) {
    int n=numsSize,count=0,ans=0;
    for(int i=0; i<n; i++){
        if(count==0){
            ans=nums[i];
        }
        if(nums[i]==ans){
            count++;
        }else{
            count--;
        }
    }
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna