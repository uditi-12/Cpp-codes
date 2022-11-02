/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

int noOfLeafNodes(BinaryTreeNode<int> *root,int n=0){
    // Write your code here.
//     if(root==NULL)
//         return n;
    if(root->left==NULL && root->right==NULL )
        return ++n;
    if(root->left!=NULL)
        n=noOfLeafNodes(root->left,n);
    if(root->right!=NULL)
        n=noOfLeafNodes(root->right,n);
    return n;
}
