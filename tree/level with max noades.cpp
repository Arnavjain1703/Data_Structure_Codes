void level(Node* root,int index,map<int,int>&A)
{
    if(root==NULL)
    {
        return;
    }
    A[index]++;
    level(root->left,index+1,A);
    level(root->right,index+1,A);
}
int maxNodeLevel(Node *root)
{
  map<int,int>A;
  int count=0;
  int max=1;
  level(root,0,A);
  for(auto x:A)
  {
      if(max<x.second)
      {
          max=x.second;
          count=x.first;
      }
  }
  return count;
}