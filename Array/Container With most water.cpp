Input:
N = 4
a[] = {1,5,4,3}
Output: 6
Explanation: 5 and 3 are distance 2 apart.
So the size of the base = 2. Height of
container = min(5, 3) = 3. So total area
= 3 * 2 = 6.


long long maxArea(long long A[], int len)
{
    long long l=0;
    long long r=len-1;
    long long ans=0;
    while(l<r)
    {
        ans=max(ans,(r-l)*min(A[l],A[r]));
        if(A[r]<A[l])
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    return ans;
}