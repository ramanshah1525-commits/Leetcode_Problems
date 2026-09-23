class Solution {
public:
    int minimumSum(int num) {
        int sum=0, min1=10, min2=10;
        while(num!=0){
            int x=num%10;
            sum=sum+x;
            if(x<min1){
                min2=min1;
                min1=x;
            }
            else if(x<min2){
                min2=x;
            }
            num=num/10;
        }
        int a=min1+min2;
        int b=sum-a;
        return (10*a)+b;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna