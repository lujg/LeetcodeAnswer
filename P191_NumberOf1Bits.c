int hammingWeight(uint32_t n){
   int m = 0;
   for(int i = 0; i < 32; i++){
      m += n&1;//git the last bit of n
      n = n>1;
    }
    return m;
}
