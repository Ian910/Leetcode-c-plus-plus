class MyQueue {
    stack<int> s;
public:
    MyQueue() {

    }

    void push(int x) {
        if (s.empty()) {
            s.push(x);
            return;
        }
        int curr = s.top();
        s.pop();
        push(x);
        s.push(curr);
    }

    int pop() {
        int temp = s.top();
        s.pop();
        return temp;
    }

    int peek() {
        return s.top();
    }

    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */