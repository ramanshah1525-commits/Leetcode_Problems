int countDigitOccurrences(int* nums, int numsSize, int digit) {
    int count=0;
    for(int i=0; i<numsSize; i++){
        int n=nums[i];
        while(n>0){
            if(n%10==digit){
                count++;
            }
            n=n/10;
        }
    }
    return count;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna