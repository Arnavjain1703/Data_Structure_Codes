bool checkNode(Node* node,int min,int max)
{
if(node==NULL) return 1;


return ((node->data<max)&&(node->data>min))&&checkNode(node->left,min,node->data)&&
checkNode(node->right,node->data,max);

}


bool isBST(Node* root) {
       
   return checkNode(root,INT_MIN,INT_MAX);
}
