class Solution {
public:
    long long countCommas(long long n) {
        long long count=0;
        long long prod=1000;
        if(n<1000){
            return 0;
        }
        while(n>=prod){
            count=count+(n-prod+1);
            prod=prod*1000;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna