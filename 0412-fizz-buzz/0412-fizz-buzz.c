/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char** answer = (char**)malloc(n * sizeof(char*));
    if (!answer) return NULL;
    for (int i = 1; i <= n; i++) {
        answer[i - 1] = (char*)malloc(16 * sizeof(char));
        if (!answer[i - 1]) return NULL;
        if (i % 15 == 0) {
            snprintf(answer[i - 1], 16, "FizzBuzz");
        } else if (i % 3 == 0) {
            snprintf(answer[i - 1], 16, "Fizz");
        } else if (i % 5 == 0) {
            snprintf(answer[i - 1], 16, "Buzz");
        } else {
            snprintf(answer[i - 1], 16, "%d", i);
        }
    }

    return answer;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna