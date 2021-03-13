Minimum number of jumps 
Medium Accuracy: 32.96% Submissions: 42522 Points: 4
Given an array of integers where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

Example 1:

Input:
N=11 
arr=1 3 5 8 9 2 6 7 6 8 9 
Output: 3 
Explanation: 
First jump from 1st element to 2nd 
element with value 3. Now, from here 
we jump to 5th element with value 9, 
and from here we will jump to last.




int minJumps(int arr[], int n){
    int end=0;int far=0;int jump=0;
    for(int i=0;i<n;i++)
    {
        far=max(far,i+arr[i]);
        if(far>=n-1)
        {
            jump++;
            return jump;
        }
        if(i==far)
        {
            return -1;
        }
        if(end==i)
        {   jump++;
            end=far;
        }
    }
}