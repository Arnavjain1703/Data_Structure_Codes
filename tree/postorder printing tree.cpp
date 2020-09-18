/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
void postorder2(Node* root,vector<int>&a)
{
    if(root!=NULL)
    {
   
    postorder2(root->left,a);
    postorder2(root->right,a);
     a.push_back(root->data);
    }
}
vector <int> postOrder(Node* root)
{
   vector<int>a;
   postorder2(root,a);
   return a;
}
