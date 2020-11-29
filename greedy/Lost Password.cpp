string largestNumber(int n, int sum){
    string N="";
    if(9*n<sum)
    {
        return to_string(-1);
    }
    for(int i=0;i<n;i++)
    {
      if(sum>=9)
      {
          N=N+'9';
          sum=sum-9;
      }
      else
      {
          N=N+to_string(sum);
          sum=0;
      }
      
    }
    return N;
}