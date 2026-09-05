int subtractProductAndSum(int n) {
    if(n==0){
        return 1;
    }
    int a=1,b=0,rem;
    while(n!=0){
        rem=n%10;
        n=n/10;
        b=b+rem;
        a=a*rem;
    }
    int ans=a-b;
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna