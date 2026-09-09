class Solution {
public:
    string defangIPaddr(string address) {
        for(int i=0; i<address.size(); i++){
            if(address[i]=='.'){
                address.replace(i,1,"[.]");
                i=i+2;
            }
        }
        return address;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna