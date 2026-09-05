int missingNumber(int* nums, int numsSize) {
    int sum=0;
    for(int i=0; i<numsSize; i++){
        sum=sum+nums[i];
    }
    int ans=(numsSize*(numsSize+1))/2;
    return ans-sum;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna