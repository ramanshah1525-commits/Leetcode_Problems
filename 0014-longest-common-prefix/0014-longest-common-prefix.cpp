class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(), strs.end());
        string str1 = strs[0];
        string str2 = strs[n-1];
        string ans="";
        int min_str = min(str1.size(),str2.size());
        for(int i=0; i<min_str; i++){
            if(str1[i]!=str2[i]){
                break;
            }
            else{
                ans=ans+str1[i];
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna