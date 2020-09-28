int heigth(Node* node,int* res)
{
  if(node==NULL)
  {
      return 0;
  }
  int lh=heigth(node->left,res);
  int rh=heigth(node->right,res);
  *res=max(*res,lh+rh+1);
  return (max(lh,rh)+1);
}
/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node) {
    int res=1;
    heigth(node,&res);
    return res;
}