int find(Node *root,int *res)
{
if(root==NULL)
return 0;
int left=find(root->left,res);
int right=find(root->right,res);
int temp=max(max(left,right)+root->data,root->data);
int ans=max(left+right+root->data,temp);
*res=max(*res,ans);
return temp;
}

int findMaxSum(Node* root)
{
   int res=INT_MIN;
int x=find(root,&res);
return res;
   
}