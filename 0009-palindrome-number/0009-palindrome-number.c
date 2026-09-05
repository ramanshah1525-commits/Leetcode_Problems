bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int ans=0,rem,temp=x;
    while(temp!=0){
        rem=temp%10;
        temp=temp/10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return false;
        }
        ans=ans*10+rem;
    }
    int x2=ans;
    if(x==x2){
        return true;
    }
    else{
        return false;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna