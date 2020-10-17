void floor2(Node* root, int key,int &res) 
{ 
    if(root==NULL)
    {
        return ;
    }
else if(root->data<key)
	{
	    res=root->data;
	    floor2(root->right,key,res);
	}
else if(root->data>key)
	{
	    floor2(root->left,key,res);
	}
else
	{
	    res=key;
	    return ;
	}
}

/*This function is used to find floor of a key*/
int floor(Node* root, int key) 
{   int res=-1;
     floor2(root,key,res);
     return  res;
}