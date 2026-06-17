class Solution {
  public:
  int hcf(int & great, int &less ){
    if(less==0)return great ;
    else{
        int rem = great%less;
       return  hcf(less,rem);
    }
}
    int gcd(int n, int m) {
        int great = max(n,m);
        int less = min(n,m);
        return hcf(great,less);
        
    }
};
