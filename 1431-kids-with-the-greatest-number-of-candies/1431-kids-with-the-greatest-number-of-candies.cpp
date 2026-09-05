class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=candies[0];
        for(int i=0;i<candies.size(); i++){
            if(max<candies[i]){
                max=candies[i];
            }
        }
        vector<bool>result;
        for(int i=0;i<candies.size(); i++){
            if(candies[i]+extraCandies>=max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna