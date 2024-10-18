REP(rd_int()){
  int @N; ll @A[N], t[N], s;

  s = sum(A(N));
  rep(i,N) t[N-1-i] = s/N + if[i < s%N, 1, 0];

  s = 0;
  rep(i,N){
    s += A[i] - t[i];
    if(s > 0) wt("No"), break_continue;
  }
  wt("Yes");
}
