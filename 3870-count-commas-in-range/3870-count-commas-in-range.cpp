class Solution {
public:
    int countCommas(int n) {
        int count=0;
        int prod=1000;
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