int reverse(int x) {
    int m = 0;
    int n = x>0?x:(-x);
    while(n>0){
        if((m*2.5+n%10/4)>(1<<29))return 0;
        m = m*10+n%10;
        n = n/10;
    }
    m = x>0?m:(-m);
    return m;
}