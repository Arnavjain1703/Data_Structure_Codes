Given an array of size N-1 such that it can only contain distinct integers in the range of 1 to N. Find the missing element.

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

int MissingNumber(vector<int>& a, int n) {
   int sum=0;
   int sum2=0;
   for(int i=1;i<n;i++)
   {
      sum=sum+i;
      sum2=sum2+a[i-1];
   }
   return n-(sum2-sum);
}