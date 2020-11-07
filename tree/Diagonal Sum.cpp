vector <int> diagonalSum(Node* root) {
    queue<Node*>A;
    Node* Head=root;
    vector<int>S;
    int sum=0;
    while(Head!=NULL)
    {
        if(Head->left!=NULL)
        {
            A.push(Head->left);
        }
        sum=sum+Head->data;
        Head=Head->right;
    }
    S.push_back(sum);
    while(A.empty()==false)
    {
       int count=A.size();
       int Sum=0;
       for(int i=0;i<count;i++)
       {
           Node*curr=A.front();
           A.pop();
           while(curr!=NULL)
           {
               if(curr->left)
               {
                   A.push(curr->left);
               }
               Sum=Sum+curr->data;
               curr=curr->right;
           }
       }
       S.push_back(Sum);
    }
    return S;
}