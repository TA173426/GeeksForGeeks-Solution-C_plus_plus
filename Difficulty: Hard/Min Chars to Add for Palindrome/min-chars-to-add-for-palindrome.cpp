class Solution {
  public:
    int minChar(string &s) {
        if(s.size()==1)return 0;
        // code here
    int size = s.size()/2;
    vector<int>count(size,0);
    int first =0;int second =1;
    while(second<size){
        if(s[first]==s[second]){
            count[second]=first+1;
            first++;
            second++;
        }
        else{
            if(first==0)second++;
            else first = count[first-1];
        }
    }
    first =0;second=s.size();
    
    while(first<second){
        if(s[first]==s[second]){
            first++;
            second--;
        }
        else{
            if(first==0)second--;
            else first = count[first-1];
        }
    }
    return s.size()-1-first-second;
    }
};
