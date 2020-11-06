void func(Node*root,int index,map<int,int>&A)
{
    A[index]=A[index]+root->data;
    if(root->left!=NULL)
    {
        func(root->left,index-1,A);
    }
    if(root->right!=NULL)
    {
        func(root->right,index+1,A);
    }
}
vector <int> verticalSum(Node *root) {
    map<int,int>A;
    func(root,0,A);
    vector<int>B;
    for(auto x:A)
    {
B.push_back(x.second);
    }
    return B;
}