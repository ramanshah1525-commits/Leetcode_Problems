int mySqrt(int x) {
   if(x==0){
    return 0;
   }
   long long i=1;
   while((i+1)*(i+1)<=(long long)x){
    i++;
   }
   return (int)i;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna