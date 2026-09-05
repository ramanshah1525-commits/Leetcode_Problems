int findNumbers(int* nums, int numsSize) {
    int count=0;
    for(int i=0; i<numsSize; i++){
        int digit=0,n=nums[i];
        while(n>0){
            digit++;
            n=n/10;
        }
        if(digit%2==0){
            count++;
        }
    }
    return count;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna