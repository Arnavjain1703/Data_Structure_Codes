void mirror(Node* node) 
{
     if(node==NULL)
     {
         return;
     }
     Node*curr=node->left;
     node->left=node->right;
     node->right=curr;
     mirror(node->left);
     mirror(node->right);
     
}