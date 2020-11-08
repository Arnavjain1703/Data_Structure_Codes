
/*Structure of the node of the binary tree

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
void find(Node* root,int index, vector<pair<Node*,int>>&V)
{
    if(root==NULL)
    {
        return;
    }
     pair<Node*,int>C;
    C.first=root;
    C.second=index;
    V.push_back(C);
    if(root->left!=NULL)
    {
        if(root->left->right==root)
        {
          return;
        }
        
    }
    if(root->right!=NULL)
    {
        if(root->right->left==root)
        {
            return;
        }
        
    }
    find(root->left,index+1,V);
    find(root->right,index+1,V);    
}
int findTreeHeight(Node* root)
{ 
   vector<pair<Node*,int>>V;
   find(root,1,V);
   int Max=INT_MIN;
   for(int i=0;i<V.size();i++)
   {   
      if(V[i].first->left!=NULL)
    {
        if(V[i].first->left->right==V[i].first)
        {
           Max=max(Max,V[i].second);
        }
        
    }
    if(V[i].first->right!=NULL)
    {
        if(V[i].first->right->left==V[i].first)
        {
            Max=max(Max,V[i].second);
        }
        
    }
   }
   return Max;
}