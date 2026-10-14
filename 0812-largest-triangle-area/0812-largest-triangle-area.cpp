class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans=0;
        int n=points.size();

        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                for (int k = j + 1; k < n; k++){
                    long long x1 = points[i][0];
                    long long y1 = points[i][1];
                    long long x2 = points[j][0];
                    long long y2 = points[j][1];
                    long long x3 = points[k][0];
                    long long y3 = points[k][1];

                    long long cross =(x2 - x1)*(y3 - y1)-(y2 - y1) * (x3 - x1);
                    double area = abs(cross)/2.0;
                    ans = max(ans, area);
                }
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna