Node* constructBst(int arr[], int n)
{
    Node*head=new Node(arr[0]);
    for(int i=1;i<n;i++)
    {
        Node* part=new Node(arr[i]);
        Node*temp=head;
        Node*prev=head;
        while(temp!=NULL)
        {
            if(temp->data>arr[i])
            {
                prev=temp;
                temp=temp->left;
            }
            else
            {
                prev=temp;
                temp=temp->right;
            }
        }
        if(prev->data>arr[i])
        {
            prev->left=part;
        }
        else
        {
            prev->right=part;
        }
    }
    return head;
}