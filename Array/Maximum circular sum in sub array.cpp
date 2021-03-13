#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find circular subarray with maximum sum
// arr: input array
// num: size of array
int circularSubarraySum(int arr[], int num){
    int sum=0;
    int M=arr[0];
    for(int i=0;i<num;i++)
    {
        sum=sum+arr[i];
    }
    int c=arr[0];
    for(int i=1;i<num;i++)
    {
        if(arr[i]<arr[i]+c)
        {
            c=arr[i]+c;
        }
        else
        {
            c=arr[i];
        }
        M=max(c,M);
    }
    for(int i=0;i<num;i++)
    {
        arr[i]=-1*arr[i];
    }
    int Max=max(0,arr[0]);
    for(int i=1;i<num;i++)
    {
        if(arr[i]<arr[i]+arr[i-1])
        {
            arr[i]=arr[i]+arr[i-1];
        }
        Max=max(arr[i],Max);
    }
    int ans=sum+Max;
    if(ans==0)
    {
        return M;
    }
    return max(ans,M); 
}

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	    
	    //calling function
	    cout << circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Drive