class MyCircularQueue {
public:
    vector<int> q;
    int front;
    int rear;
    int size;
    MyCircularQueue(int k) {
        q.resize(k);//because initially the queue is empty to usko we will need to resize over the period of time
        front = 0;
        rear = -1;
        size = 0;
    }
    bool enQueue(int value) {
        if (isFull())//kyunki we cant add data in a full queue
            return false;
        rear = (rear + 1) % q.size();
        q[rear] = value;
        size++;
        return true;
    }
    bool deQueue() {
        if (isEmpty())
            return false;
        front = (front + 1) % q.size();
        size--;
        return true;
    }
    int Front() {
        if (isEmpty())
            return -1;

        return q[front];
    }
    int Rear() {
        if (isEmpty())
            return -1;

        return q[rear];
    }
    bool isEmpty() {
        return size == 0;
    }
    bool isFull() {
        return size == q.size();
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */