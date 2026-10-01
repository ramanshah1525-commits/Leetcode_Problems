class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int>v1={1};
        while(v1.size()<n){
            vector<int>v2;
            for(int i=0; i<v1.size(); i++){
                if(v1[i]*2-1<=n){
                    v2.push_back(2*v1[i]-1);
                }
            }
            for(int i=0; i<v1.size(); i++){
                if(v1[i]*2<=n){
                    v2.push_back(2*v1[i]);
                }
            }
            v1=v2;
        }
        return v1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna