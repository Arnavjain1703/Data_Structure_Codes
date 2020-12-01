
Given two sorted arrays A and B of size M and N respectively. Each array contains only distinct elements but may have some elements in common with the other array. Find the maximum sum of a path from the beginning of any array to the end of any of the two arrays. We can switch from one array to another array only at the common elements.
Note: Only one repeated value is considered in the valid path sum.


Example 1:

Input:
M = 5, N = 4
A[] = {2,3,7,10,12}
B[] = {1,5,7,8}
Output: 35
Explanation: The path will be 1+5+7+10+12
= 35.

Example 2:

Input:
M = 3, N = 3
A[] = {1,2,3}
B[] = {3,4,5}
Output: 15
Explanation: The path will be 1+2+3+4+5=15.

Your Task:
You don't need to read input or print anything. Complete the function max_path_sum() which takes the two arrays A and B along with their sizes M and N as input parameters. It returns the maximum path sum.


Expected Time Complexity: O(M + N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= M,N <= 104
1 <= A[i], B[i] <= 104

Solution

int max_path_sum(int A[], int B[], int l1, int l2)
{   
    int I1=0;
    int J1=0;
    int sum1=0;
    int sum2=0;
    int sum=0;
    while(l1>0&&l2>0)
    {
        if(A[I1]>B[J1])
        {
            sum2=sum2+B[J1];
            J1++;
            l2--;
        }
        else if(B[J1]>A[I1])
        {
            sum1=sum1+A[I1];
            I1++;
            l1--;
        }
        else
        {   
            if(sum1>sum2)
            {
               sum=sum+sum1+A[I1]; 
            }
            else
            {
               sum=sum+sum2+B[J1]; 
            }
            sum1=0;
            sum2=0;
            I1++;
            J1++;
            l1--;
            l2--;
        }
    }
     while(l1>0)
     {
         l1--;
         sum1=sum1+A[I1];
         I1++;
     }
      while(l2>0)
     {
         l2--;
         sum2=sum2+B[J1];
         J1++;
     }
     sum=sum+max(sum1,sum2);
     return sum;
}