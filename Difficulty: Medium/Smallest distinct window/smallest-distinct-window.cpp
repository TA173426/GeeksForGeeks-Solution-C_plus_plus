class Solution {
  public:
    int findSubString(string& s) {
     int first = 0,second=0;
    int arr[26]={};
    int arr1[26]={};
    for(int i = 0;i<s.size();i++){
        arr1[s[i]-'a']=1;
    }
    int count = 0;
    for(int i = 0;i<26;i++){
        if(arr1[i]==1){count++;}
        
    }
    
    int len = s.size();
    while(second<s.size() || count==0){
        if(count==0){ 
            len = min(len,second-first);
            arr[s[first]-'a']-=1;
            if(arr[s[first]-'a']==0)count++;
            first++;
        }
        else{
        if(arr[s[second]-'a']==0)count--;
        arr[s[second]-'a']+=1;
        second++;
        }
    }
    return len;
    }
};