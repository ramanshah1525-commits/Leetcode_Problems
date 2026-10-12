class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v;
        int n=gain.size();
        int sum=0;
        for(int i=0; i<n; i++){
            v.push_back(sum);
            sum=sum+gain[i];
        }
        v.push_back(sum);
        int max=INT_MIN;
        for(int i=0; i<n+1; i++){
            if(max<v[i]){
                max=v[i];
            }
        }
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna