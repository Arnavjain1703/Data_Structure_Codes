/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
Node *convertTree(int in[], int post[], int is, int ie, int &postIndex)
{
    if(is > ie)
    {
        return NULL;
    }
    
    Node *root = new Node(post[postIndex--]);
    
    int inIndex = 0;
    for(int i = is; i <= ie; i++)
    {
        if(in[i] == root->data)
        {
            inIndex = i;
            break;
        }
    }
    
    
    root->right = convertTree(in, post, inIndex+1, ie, postIndex);
    root->left  = convertTree(in, post, is, inIndex-1, postIndex);
    
    return root;
}
Node *buildTree(int in[], int post[], int n) {
    int postIndex = n-1;
    
    return convertTree(in, post, 0, n-1, postIndex);
}