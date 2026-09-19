class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int p = max(x1,min(xCenter,x2));
        int q = max(y1,min(yCenter,y2));
        int d1=(xCenter-p)*(xCenter-p);
        int d2=(yCenter-q)*(yCenter-q);
        int res=d1+d2;
        return (res<=radius*radius);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna