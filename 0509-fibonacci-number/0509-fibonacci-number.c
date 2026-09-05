

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    int a=0,b=1,fibo=1;
    for(int i=1; i<n; i++){
        fibo=a+b;
        a=b;
        b=fibo;
    }
    return fibo;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna