double myPow(double x, int n) {
    double y=1;
    if(n==0)return 1;
    if(n==1)return x;
    if(n==-1)return 1/x;
    if(x==1)return 1;
    if(x==-1)return (1-2*(n%2));
    /*if(n>=0){//O(n)  time limit exceeded
        for(int i=0; i<n; i++){
            tmp = y;
            y *= x;
            }
        }
    }
    if(n<0){
        for(int i=0; i<(-n); i++){
            tmp = y;
            y /= x;
            }
        }
        
    }*/
    if(n%2==0){  //O(log(n))
        y = myPow(x,n/2);
        return y*y;
    }
    else{
        if(n>0){
            y = myPow(x,n/2);
            return x*y*y;
        }
        else {
            y = myPow(x,-n/2);
            return 1/(x*y*y);
        }
    }
}
