Node* lca(Node* root ,int n1 ,int n2 )
{
   if(root==NULL)
   {
       return NULL;
   }
   if((root->data==n1)||(root->data==n2)) return root;
   Node*L=lca(root->left,n1,n2);
   Node*R=lca(root->right,n1,n2);
   if((L!=NULL)&&(R!=NULL))
   {
       return root;
   }
   if(L!=NULL)
   {
       return L;
   }
   if(L!=NULL)
   {
       return R;
   }
   
}