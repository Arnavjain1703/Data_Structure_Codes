
/*Complete the function below
Node is as follows:
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
// Returns true if the nodes with values 'a' and 'b' are cousins. Else returns false
pair<Node*,int> parentandheight(Node* root,int x,int height)
{    if(root==NULL)
     {
        pair<Node*,int>C;
        C.first=NULL;
        C.second=height;
        return C;
     }
     if(root->left!=NULL)
     {
         if(root->left->data==x)
         {
             pair<Node*,int>C;
             C.first=root;
             C.second=height;
             return C;
         }
     }
     if(root->right!=NULL)
     {
         if(root->right->data==x)
         {
             pair<Node*,int>C;
             C.first=root;
             C.second=height;
             return C;
         }
     }
   pair<Node*,int>A=parentandheight(root->left,x,height+1);
   pair<Node*,int>B=parentandheight(root->right,x,height+1);
   if(A.first!=NULL)
   {
       return A;
   }
   return B;
}
bool isCousins(Node *root, int a, int b)
{
  if(root==NULL)
  {
      return 0;
  }
   pair<Node*,int>A=parentandheight(root,a,1);
   pair<Node*,int>B=parentandheight(root,b,1);
   if(A.first!=B.first && A.second==B.second)
   {
       return 1;
   }
   return 0;
}