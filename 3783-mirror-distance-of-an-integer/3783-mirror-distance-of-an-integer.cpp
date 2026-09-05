class Solution {
public:
    int mirrorDistance(int n) {
        if(n==0){
            return 0;
        }
        int temp=n;
        int ans=0,rem;
        while(temp!=0){
            rem=temp%10;
            temp=temp/10;
            ans=ans*10+rem;
        }
        return abs(n-ans);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna