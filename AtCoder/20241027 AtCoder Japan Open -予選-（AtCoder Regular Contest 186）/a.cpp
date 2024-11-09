int @N;
bitset<901> dp[N+1][N+1];

dp[N][N].set(0);
rrep(x,N+1) rrep(y,N+1){
  if(x) dp[x-1][y] |= dp[x][y];
  if(y) dp[x][y-1] |= dp[x][y];
  rep(i,2,x+1) rep(j,2,y+1) dp[x-i][y-j] |= dp[x][y] << (i*j);
}

REP(rd_int()){
  int @K;
  wt(if[dp[0][0][N*N-K], "Yes", "No"]);
}
