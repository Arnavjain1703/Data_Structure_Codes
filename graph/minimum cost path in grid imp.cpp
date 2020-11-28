int shortest(vector<vector<int> > &grid, int n) {
    int dist[1001][1001];
    for(int i=0;i<1001;i++)
        for(int j=0;j<1001;j++)
            dist[i][j] = INT_MAX;
    dist[0][0] = grid[0][0];
    
    priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> pq;
    
    pq.push(make_pair(grid[0][0], make_pair(0,0)));
    
    while(!pq.empty()){
        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};
        
        pair<int, pair<int,int>> p = pq.top();
        pq.pop();
        
        int i = p.second.first;
        int j = p.second.second;
        
        for(int k=0;k<4;k++){
            int x = i + dx[k];
            int y = j + dy[k];
            
            if(x>=0 && x<n && y>=0 && y<n && (dist[i][j]+grid[x][y]) < dist[x][y]){
                dist[x][y] = (dist[i][j]+grid[x][y]);
                pq.push(make_pair(dist[x][y], make_pair(x,y)));
            }
        }
    }
    //return grid[0][0];
    return dist[n-1][n-1];
}