Node *RemoveHalfNodes(Node *root)
{
    if((root->left==NULL)&&(root->right==NULL))
    {
        return root;
    }
    if((root->left==NULL)||(root->right==NULL))
    {
        if(root->left!=NULL)
        {
            return RemoveHalfNodes(root->left);
        }
        return RemoveHalfNodes(root->right);
    }
    root->left=RemoveHalfNodes(root->left);
    root->right=RemoveHalfNodes(root->right);
    return root;
}