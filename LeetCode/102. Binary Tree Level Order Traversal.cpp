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
     int height(TreeNode* root){
        // code here 
        int l=0,r=0;
        int h=0;
        if(root!=NULL)
        h++;
        if(root->left!=NULL)
        {
            l=height(root->left);
        }
        if(root->right!=NULL){
            r=height(root->right);
        }
        h+=max(r,l);
        return h;
    }
    vector<int> print(TreeNode * root, int i,vector<int> & ans){
        
        //vector<int> ans;
        if(root==NULL)
            return ans;
        if(i==0)
            ans.push_back(root->val);
        else{
            print(root->left,i-1,ans);
            print(root->right,i-1,ans);
        }
       return ans;     
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        int h=height(root);
        
        
        for(int i=0;i<h;i++){
            vector<int> ans1;
            ans.push_back(print(root,i,ans1));
        }
        return ans;
    }
};
