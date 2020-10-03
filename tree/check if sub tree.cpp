bool check(Node* T,Node* S)
{   if(T==NULL && S!=NULL)
    {
        return false;
    }
    if(T!=NULL && S==NULL)
    {
        return false;
    }
    if(T==NULL)
    {
        return true;
    }
    if(T->data!=S->data)
    {
        return false;
    }
    return (check(T->left,S->left)&&check(T->right,S->right));
    
}
bool isSubTree(Node* T, Node* S) {
    if(T==NULL)
    {
        return false;
    }
    if(T->data==S->data)
    {
        if(check(T,S))
        {
            return true;
        }
    }
    return (isSubTree(T->left,S)||isSubTree(T->right,  S));
}