int @N, @M, @(A--,B--)[M];
const int dx[9] = {0, -2, -1, -1, -2, 2, 1, 1, 2};
const int dy[9] = {0, -1, -2, 2, 1, -1, -2, 2, 1};
int sz = 0;
ll x, y, res;
static ll arr[2d6];

rep(i,M) rep(k,9){
  x = A[i] + dx[k];
  y = B[i] + dy[k];
  if(0 <= x < N && 0 <= y < N) arr[sz++] = x * N + y;
}

sortA(sz, arr);

res = (ll) N * N - 1;
rep(i,1,sz) if(arr[i] != arr[i-1]) res--;

wt(res);
