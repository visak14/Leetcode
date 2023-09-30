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
    bool help( TreeNode* & p, TreeNode* & q){
        if (p == NULL && q == NULL)return true;
        if ( p==  NULL) return false;
        if ( q == NULL) return false;
        if ( p->val != q->val) return false;
        if  (help(p->left, q->left) == true && help (p->right, q->right) == true) return true;
        else
        return false;
    }
	bool isSameTree(TreeNode* & p, TreeNode* & q) {
		// Your code goes here
       return  help (p,q);
    }
};