int bulbSwitch(int n) {
    if(n<=0)return 0;
    /*if(n==1)return 1;
    for(int i=2;i<=n/2;i++){
        if(n==(i*i))return (bulbSwitch(n-1)+1);
    }
    return bulbSwitch(n-1);*/ //time out
    int i = 1;
    while(i*i<=n){//if the (m)th bulbs is on, there must be m=i^2. Only in that way, the bulb will be toggled old times, which means it will be on.
        i++;      //So if i^2<=n<(i+1)^2, then the answer is i.Because only the 1^2, 2^2, ... ,i^2 bulbs will be on.
    }
    return (i-1);
}