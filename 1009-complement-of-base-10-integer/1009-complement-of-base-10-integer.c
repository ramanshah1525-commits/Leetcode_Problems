int bitwiseComplement(int n) {
    if(n==0){
        return 1;
    }
    int ans=0,rem,prod=1;
    while(n){
        rem=n%2;
        if(rem==1){
            rem=0;
        }
        else{
            rem=1;
        }
        n=n/2;
        ans=ans+rem*prod;
        prod=prod*2;
    }
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna