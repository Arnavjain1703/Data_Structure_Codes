int Check(Node* root,int X,int *res)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=Check(root->left,X,res);
    int rh=Check(root->right,X,res);
    int total=root->data+lh+rh;

    if(total==X)
    {
        *res=*res+1;
    }
    return total;
}
int countSubtreesWithSumX(Node* root, int X)
{   
    int res=0;
    Check(root,X,&res);
    return res;
}