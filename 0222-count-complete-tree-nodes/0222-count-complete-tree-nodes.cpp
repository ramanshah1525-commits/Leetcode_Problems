/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root){
            return 0;
        }
        int left = leftside(root);
        int right = rightside(root);
        if(left==right){
            return (1<<left)-1;
        }
        return countNodes(root->left)+countNodes(root->right)+1;
    }
    int leftside(TreeNode* node){
        int h=0;
        while(node){
            node=node->left;
            h++;
        }
        return h;
    }
    int rightside(TreeNode* node){
        int h=0;
        while(node){
            node=node->right;
            h++;
        }
        return h;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna