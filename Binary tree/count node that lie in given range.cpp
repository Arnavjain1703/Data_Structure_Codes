int getCountOfNode(Node *root, int l, int h)
{
  if(root==NULL)
  {
      return 0;
  }
  int count=0;
  if(root->data>=l && root->data<=h)
  {
      count++;
  }
  return count+getCountOfNode(root->left,l,h)+ getCountOfNode(root->right,l,h);
 
  
}