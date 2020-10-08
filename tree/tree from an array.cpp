Node *createTree(int arr[], int n)
{
   vector<Node*>vec;
   for(int i=0;i<n;i++)
   {
       Node* temp = new Node(i);
       vec.push_back(temp);
   }
   int root;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==-1) root=i;
       if(arr[i]!=-1 && vec[arr[i]]->left==NULL)
            vec[arr[i]]->left=vec[i];
       else if(arr[i]!=-1 && vec[arr[i]]->right==NULL)
            vec[arr[i]]->right=vec[i];
   }
   return vec[root];
}