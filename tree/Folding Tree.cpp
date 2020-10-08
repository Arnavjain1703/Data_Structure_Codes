bool IsFoldable(Node* root)
{   int j=0;
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
         vector<Node*>A ;
        for(int i=0;i<count;i++)
        {
             A.push_back(q.front());
             Node*Curr=q.front();
             q.pop();
             if(Curr==NULL)
             {
                 continue;
             }
             q.push(Curr->left);
             q.push(Curr->right);
             
        }
        if((A.size()%2!=0)&&j)
        {
            return false;
        }
        if(j)
        {
            for(int i=0;i<A.size()/2;i++)
            {
                if((A[i]!=NULL)&&(A[A.size()-1-i]==NULL))
                {
                    return false;
                }
                if((A[i]==NULL)&&(A[A.size()-1-i]!=NULL))
                {
                    return false;
                }
            }
        }
        
        j++;
    }
    return true;
}