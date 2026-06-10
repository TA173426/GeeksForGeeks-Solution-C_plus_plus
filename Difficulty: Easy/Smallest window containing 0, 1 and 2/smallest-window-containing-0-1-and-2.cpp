class Solution {
  public:
    int smallestSubstring(string s) {
        
        int arr[3]={};
        int len =s.size(),first=0,second=0,count=3;
        bool flag = 1;
        while(second<s.size()||count==0){
            if(count==0){
                len = min(len,second-first);
                arr[s[first]-'0']-=1;
                if(arr[s[first]-'0']==0)count++;
                first++;
                flag=0;
            }
            else{
                if(arr[s[second]-'0']==0)count--;
                arr[s[second]-'0']+=1;
                second++;
            }
        }
        if(flag)return -1;
        return len;
    }
};
