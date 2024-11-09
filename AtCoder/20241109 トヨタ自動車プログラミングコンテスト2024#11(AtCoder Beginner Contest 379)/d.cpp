static ll a[2d5], x, y, c;
REP(rd_int()){
  int @TYPE;
  if(TYPE==1){
    a[y++] = c;
  } else if(TYPE == 2){
    ll @T;
    c += T;
  } else {
    ll @H; int res = 0;
    while(x < y && a[x] <= c-H) res++, x++;
    wt(res);
  }
}
