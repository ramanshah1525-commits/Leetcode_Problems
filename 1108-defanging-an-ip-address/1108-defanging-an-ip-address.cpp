class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(int i=0; i<address.size(); i++){
            char c = address[i];
            if (c=='.'){
               result=result+"[.]";
        }   else{
               result=result+c;  
            }
        }    
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna