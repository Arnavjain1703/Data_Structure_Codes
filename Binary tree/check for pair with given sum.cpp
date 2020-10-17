bool findPair2(Node* root,int sum,unordered_set<int>&S)
{
    if(root==NULL)
    {
        return false;
    }
    if(S.find(sum-(root->data))!=S.end())
    {
        
        return true;
    }
    S.insert(root->data);
    return((findPair2(root->left,sum,S))||(findPair2(root->right,sum,S)));
     
    
    
}
bool findPair(Node* root, int sum) {
    unordered_set<int>S;
    S.insert(root->data);
    return((findPair2(root->left,sum,S))||(findPair2(root->right,sum,S)));
    