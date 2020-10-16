Node* getSucessor(Node*curr)
{
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
    {   
        curr=curr->left;
    }
    return curr;
}

// Return the root of the modified BST after deleting the node with value X
Node *deleteNode(Node *root,  int X)
{
if(root==NULL)
{
    return root;
}
if(root->data>X)
{
    root->left=deleteNode(root->left,X);
}
else if(root->data<X)
{
    root->right=deleteNode(root->right,X);
}
else
{
    if(root->left==NULL)
    {
        Node*temp=root->right;
        delete root;
        return temp;
    }
    else if(root->right==NULL)
    {
        Node*temp=root->left;
        delete root;
        return temp;
    }
    else
    {
        Node*temp=getSucessor(root);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
        return root;
    }
}
}