/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// function should return the sum of all 
// left leaf nodes
void Sum(Node*root,int index,int &sum)
{
   if(root==NULL)
   {
       return ;
   }
   if((root->left==NULL)&&(root->right==NULL))
   {
       if(!index)
       {
           sum=sum+root->data;
       }
       else
       {
           return;
       }
   }
   Sum(root->left,0,sum);
   Sum(root->right,1,sum);
}
int leftLeavesSum(Node *root)
{
   int sum=0;
   if(root==NULL)
   {
       return sum;
   }
   Sum(root->left,0,sum);
   Sum(root->right,1,sum);
   return sum;
}