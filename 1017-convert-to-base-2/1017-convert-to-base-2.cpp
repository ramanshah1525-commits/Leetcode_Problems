class Solution {
public:
    string baseNeg2(int n) {
        if(n==0){
            return "0";
        }
        int rem;
        string ans="";
        while(n!=0){
            rem=n%-2;
            n=n/-2;
            if(rem<0){
                rem+=2;
                n+=1;
            }
            ans+=to_string(rem);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna