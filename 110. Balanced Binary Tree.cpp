class Solution {
public:
int traverse(TreeNode* root){
    if(root==NULL) return 0;

    return 1+ max(traverse(root->left),traverse(root->right));

}

    bool isBalanced(TreeNode* root) {
        
      if(root==NULL ) return true;
      int left= traverse(root->left);
      int right= traverse(root->right);

      if(abs(left-right) >1) return false;

     bool a=isBalanced(root->left);
     if(a==false) return false;

     bool b= isBalanced(root->right);

     if(b==false) return false;


   return true;


        
    }
};
