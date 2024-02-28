/*
Given the root of a binary tree, return the leftmost value in the last row of the tree.

 

Example 1:


Input: root = [2,1,3]
Output: 1
Example 2:


Input: root = [1,2,3,4,null,5,6,null,null,7]
Output: 7
 

Constraints:

The number of nodes in the tree is in the range [1, 104].
-231 <= Node.val <= 231 - 1
*/

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
/*
    int maxDepth;
    int bottumLeft;
    void dfs(TreeNode * root, int currDepth){
        if(!root)return;

        if(currDepth > maxDepth){
            maxDepth = currDepth;
            bottumLeft = root->val;
        }
        dfs(root->left, currDepth+1);
        dfs(root->right, currDepth+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        maxDepth=-1;
        dfs(root, 0);
        return bottumLeft;
    }
    */
       int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>que;
        int bottomLeft;
        que.push(root);

        while(!que.empty()){
            int n = que.size();

            while(n--){
                TreeNode* node = que.front();
                que.pop();

                bottomLeft = node->val;
                if(node->right){
                    que.push(node->right);
                }
                  if(node->left){
                    que.push(node->left);
                }
            }
        }
        return bottomLeft;
    }
};
