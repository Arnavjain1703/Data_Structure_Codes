
/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

// Return 1 if all the nodes in the tree satisfy the given property. Else return 0
int isSumProperty(Node *root)
{
  if(root==NULL)
  {
      return 1;
  }
  if(root->left==NULL && root->right==NULL)
  {
      return 1;
  }
  if(root->data==((root->left?root->left->data:0)+(root->right?root->right->data:0)))
  {
     return isSumProperty(root->left)&&isSumProperty(root->right);
  }
  return 0;
  
}