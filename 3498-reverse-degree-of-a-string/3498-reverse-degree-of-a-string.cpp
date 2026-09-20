class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0; i<s.size(); i++){
            int pos1=s[i]-'a'+1;
            int pos2=27-pos1;
            sum=sum+pos2*(i+1);
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna