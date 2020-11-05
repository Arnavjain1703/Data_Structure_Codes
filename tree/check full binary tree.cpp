bool isFullTree (struct Node* root)
{
   if((root->left!=NULL)&&(root->right!=NULL))
   {
       return isFullTree(root->left)&&isFullTree(root->right);
   }
   else if((root->left==NULL)&&(root->right==NULL))
   {
       return true;
   }
   return false;
}