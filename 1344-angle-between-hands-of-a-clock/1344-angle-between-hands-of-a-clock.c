double angleClock(int hour, int minutes) {
    double ans=((30*hour)-(5.5*minutes));
    if(ans<0){
        ans=-ans;
    }
    if(ans>180){
        ans=360-ans;
    }
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna