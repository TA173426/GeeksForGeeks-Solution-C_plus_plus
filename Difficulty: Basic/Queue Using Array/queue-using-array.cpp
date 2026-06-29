class myQueue {

  public:
    
    int rear,front,size;
    int *arr;
    myQueue(int n) {
        
        arr= new int[n];
        rear =-1;
        front=-1;
        size = n-1;
    }

    bool isEmpty() {
        if(front==-1 && rear==-1)return true;
        return false;
    }

    bool isFull() {
        if(rear-front==size)return true;
        return false;
    }

    void enqueue(int x) {
        if(isFull())return ;
        if(isEmpty())front=0;
        rear++;
        arr[rear]=x;
    }

    void dequeue() {
        if(isEmpty())return;
        front++;
        if(front>rear){
            rear=-1;
            front=-1;
        }
    }

    int getFront() {
        if(isEmpty())return -1;
        return arr[front];
    }

    int getRear() {
        if(isEmpty())return -1;
        return arr[rear];
    }
};