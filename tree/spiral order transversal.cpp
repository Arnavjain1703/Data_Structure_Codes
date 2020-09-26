vector<int> findSpiral(Node *root)
{
    bool reverse=true;
    vector<int>A;
    if(root==NULL)
    {
        return A;
    }
    queue<Node*>q;
    q.push(root);
    stack<int>a;
    while(q.empty()==false)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            Node* curr=q.front();
            q.pop();
            if(reverse)
            {
                a.push(curr->data);
            }
            else
            {
                A.push_back(curr->data);
            }
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
        if(reverse)
        {
            while(a.empty()==false)
            {
                A.push_back(a.top());
                a.pop();
            }
        }
        reverse=!reverse;
    }
    
    
}
