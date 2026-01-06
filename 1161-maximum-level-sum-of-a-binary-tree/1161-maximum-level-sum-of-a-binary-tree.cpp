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
    int maxLevelSum(TreeNode* root) {
                                          //   day first
         if(root == nullptr) return 0;
         int maxlevel = 1;
         int currlevel = 1;
         int maxsum = root->val;
             
         queue<TreeNode*>q;
         q.push(root);

           while(!q.empty()){

                  int levelsize = q.size();
                  int currsum = 0;

                  for(int i = 0; i<levelsize; i++){

                        TreeNode* node = q.front();
                        q.pop();

                        currsum += node->val;

                        if(node->left != nullptr) q.push(node->left);
                        if(node->right != nullptr) q.push(node->right);
                  }
                     if(currsum >maxsum){

                             maxsum = currsum;
                             maxlevel = currlevel;
                     }
                         currlevel++;
           }
               return maxlevel;
    }
};