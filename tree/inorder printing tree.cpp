/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

void inorder2(Node* root,vector<int>&a)
{
    if(root!=NULL)
    {
   
     inorder2(root->left,a);
     a.push_back(root->data);
     inorder2(root->right,a);
    }
}
// Return a vector containing the inorder traversal of the tree
vector<int> inOrder(Node* root)
{
  vector<int>a;
   inorder2(root,a);
   return a;
}
