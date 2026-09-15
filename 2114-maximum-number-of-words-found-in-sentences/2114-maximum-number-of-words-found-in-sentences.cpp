class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for (int i=0; i<sentences.size(); i++){
            int word = 1;
            for (int j=0; j<sentences[i].length(); j++){
                if (sentences[i][j]==' '){
                    word=word+1;
                }
            }
            if(word>max){
                max=word;
            }
        }
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna