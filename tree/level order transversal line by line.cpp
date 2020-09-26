vector<vector<int>> levelOrder(Node* node)
{
  vector<vector<int>>b;
  queue<Node*>q;
  q.push(node);
  while(q.empty()==false)
  {
      vector<int>a;
      int count=q.size();
      for(int i=0;i<count;i++)
      {
          Node* curr=q.front();
          a.push_back(curr->data);
          q.pop();
          if(curr->left!=NULL)
          {
            q.push(curr->left);
          }
          if(curr->right!=NULL)
          {
             q.push(curr->right); 
          }
      }
      b.push_back(a);
  }
  return b;
}