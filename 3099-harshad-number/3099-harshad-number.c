int sumOfTheDigitsOfHarshadNumber(int x) {
    if(x<=0){
        return -1;
    }
    int sum=0,rem,temp=x;
    while(temp!=0){
        rem=temp%10;
        temp=temp/10;
        sum=sum+rem;
    }
    if(x%sum==0){
        return sum;
    }
    else{
        return -1;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna