class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int a=matrix.size();
        int b=matrix[0].size();
        vector<vector<int>>result(b,vector<int>(a));
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                result[j][i]=matrix[i][j];
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna