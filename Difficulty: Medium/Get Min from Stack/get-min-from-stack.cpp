#include<iostream>
#include<vector>
#include<utility>

class SpecialStack {
    vector<pair<int,int>>st;
    int top;
    int mini;
  public:
    SpecialStack() :st(100000){
        top=-1;
        mini=INT_MAX;
        
    }

    void push(int x) {
        top++;
        mini = min(mini,x);
        st[top]={x,mini};
    }

    void pop() {
        if(top==-1)return;
        top--;
        mini = (top==-1)?INT_MAX:st[top].second; 
    }

    int peek() {
        if(top==-1)return -1;
        return st[top].first;
    }

    bool isEmpty() {
        if(top==-1)return true;
        return false;
    }

    int getMin() {
        if(top==-1)return -1;
        return st[top].second;
    }
};