int findComplement(int num) {
    if(num==0){
        return 1;
    }
    int ans=0,rem,prod=1;
    while(num!=0){
        rem=num%2;
        if(rem==1){
            rem=0;
        }
        else{
            rem=1;
        }
        num=num/2;
        ans=rem*prod+ans;
        if(prod>INT_MAX/2){
            break;
        }
        prod=prod*2;
    }
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna