struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

void preorder2(Node* root,vector<int>&a)
{
    if(root!=NULL)
    {
    a.push_back(root->data);
    preorder2(root->left,a);
    preorder2(root->right,a);
    }
}

vector <int> preorder(Node* root)
{ 
   vector<int>a;
   preorder2(root,a);
   return a;
}