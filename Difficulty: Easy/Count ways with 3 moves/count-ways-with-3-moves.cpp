
class Solution {
  public:
  int hop(int n ){
    if(n==0 || n==1)return 1;
    else if(n<0)return 0;
    else{
        return hop(n-1)+hop(n-2)+hop(n-3);
    }
}
    int countWays(int n) {
        // your code here
return hop(n);
    }
};
