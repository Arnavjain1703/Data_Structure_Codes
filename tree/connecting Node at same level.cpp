/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

// Should set the nextRight for all nodes
void connect(Node *p)
{
   queue<Node*>q;
   q.push(p);
   
   while(q.empty()==false)
   {
       int size=q.size();
       Node*Prev=NULL;
       for(int i=0;i<size;i++)
       {
        Node*Curr=q.front();
        q.pop();
        if(Curr->left)
        {
        q.push(Curr->left);
        }
        if(Curr->right)
        {
        q.push(Curr->right);
        }
        if(Prev!=NULL)
        {
            Prev->nextRight=Curr;
        }
        Prev=Curr;
        if(i==(size-1))
        {
             Prev->nextRight=NULL;;
        }
       }
    }
}

