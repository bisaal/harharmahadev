int floyd_warshall(){
    rep(k,n){
        rep(i,n){
            rep(j,n){
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }
}