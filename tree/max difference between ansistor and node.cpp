int maxDiff2(Node* root,int *res)
{
    if(root==NULL)
    {
        return INT_MAX;
    }
    int lh=maxDiff2(root->left,res);
    int rh=maxDiff2(root->right,res);
    int m = min(lh,rh);
    *res=max(*res,(root->data)-m);
    return min(m,root->data);
    
    
}
int maxDiff(Node* root)
{
    int res=INT_MIN;
    maxDiff2(root,&res);
    return res;
    
}