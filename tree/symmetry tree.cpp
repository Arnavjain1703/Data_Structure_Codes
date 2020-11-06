bool isSymmetric(struct Node* root)
{   
    if(root==NULL)
    {
    return true;
    }
	queue<Node*>A;
	A.push(root);
	while(A.empty()==false)
	{    
	    vector<int>C;
	    int count=A.size();
	    for(int i=0;i<count;i++)
	    {
	    
	    Node* curr=A.front();
	    A.pop();
	    if(curr->left!=NULL)
	    {
	        A.push(curr->left);
	        C.push_back(curr->left->data);
	    }
	    else{
	        C.push_back(-1);
	    }
	    if(curr->right!=NULL)
	    {
	        A.push(curr->right);
	         C.push_back(curr->right->data);
	    }
	    else
	    {
	        C.push_back(-1);
	    }
	    }
	     for(int j=0;j<C.size()/2;j++)
	    {   
	       if(C[j]!=C[C.size()-j-1])
	       {
	           return false;
	       }
	    }
	}
	return true;
}