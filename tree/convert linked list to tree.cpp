void convert(Node *head, TreeNode *&root) {
  vector<TreeNode*>V;
  while(head!=NULL)
  {
      TreeNode* temp=new TreeNode(head->data);
      V.push_back(temp);
      head=head->next;
  }
  int n=V.size();
  for(int i=0;i<n/2;i++)
  {
      if(2*i+1<n)
      {
          V[i]->left=V[2*i+1];
      }
       if(2*i+2<n)
      {
          V[i]->right=V[2*i+2];
      }
  }
  root =V[0];
}