class MyQueue {
private:
    stack<int> inStack;    // receives newly pushed elements
    stack<int> outStack;   // gives elements out in queue (FIFO) order

    // Moves all elements from inStack to outStack ONLY when outStack is empty
    void transfer() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());   // take the top of inStack...
                inStack.pop();                  // ...and remove it from inStack
            }
        }
    }

public:
    MyQueue() {
        // nothing to set up: both stacks start empty
    }

    void push(int x) {
        inStack.push(x);               // always push to inStack
    }

    int pop() {
        transfer();                    // make sure the front is on top of outStack
        int frontValue = outStack.top();
        outStack.pop();
        return frontValue;
    }

    int peek() {
        transfer();
        return outStack.top();         // front element, not removed
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};
