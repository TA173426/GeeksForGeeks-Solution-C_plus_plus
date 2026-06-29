class twoStacks {
  
     
  public:
 int *arr;
   int first ,second,size;
   
    twoStacks() {
        size = 100;
        arr = new int[size];
        first = -1;
        second = size;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        first ++;
        arr[first]=x;
        
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        second--;
        arr[second]=x;
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
       if(first==-1)return -1;
        int x = arr[first];
        first--;
        return x;
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
       if(second==size)return -1;
        int x = arr[second];
        second++;
        return x;
    }
};