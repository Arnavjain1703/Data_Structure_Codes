void heapify(int arr[], int n, int i)  {
     int largest=i;
     int left=2*i+1;
     int right=2*i+2;
     if(left<n && arr[left]>arr[largest])largest=left;
     if(right<n && arr[right]>arr[largest])largest=right;
     if(largest!=i)
     {
     swap(arr[largest],arr[i]);
     heapify(arr,n,largest);
     }
     
     
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    for(int i=(n-2)/2;i>=0;i--)
    {
        heapify(arr,n,i); 
    }
}