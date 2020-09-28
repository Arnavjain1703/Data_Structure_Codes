int height(Node*node)
{
  if(node==NULL)
  {
      return 0;
  }
  return max(height(node->left),height(node->right))+1;
}
/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node) {
    if(node==NULL)
    {
        return 0;
    }
    int d1=1+height(node->left)+height(node->right);
    int d2=diameter(node->left);
    int d3=diameter(node->right);
    
    return max(d1,max(d2,d3));
}