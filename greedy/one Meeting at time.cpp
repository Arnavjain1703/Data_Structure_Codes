bool Mysort(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b)
{
    if(a.second.second==b.second.second)
    {
        return a.first<b.first;
    }
    return a.second.second<b.second.second;
}
void maxMeetings(int start[], int end[], int n) {
    vector<pair<int,pair<int,int>>>C;
    for(int i=0;i<n;i++)
    {
        C.push_back(make_pair(i+1,make_pair(start[i],end[i])));
    }
    sort(C.begin(),C.end(),Mysort);
    pair<int,pair<int,int>>G;
    G=make_pair(0,make_pair(0,0));
    for(int i=0;i<n;i++)
    {
      if(C[i].second.first>G.second.second)
      {
          cout<<C[i].first<<' ';
          G=C[i];
      }
    }
}