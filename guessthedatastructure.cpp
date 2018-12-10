#include <bits/stdc++.h>

using namespace std;

void print_stack(stack<int>);
bool check_stack(stack<int>*, int, int, bool);
bool check_queue(queue<int>*, int, int, bool);
bool check_pqueue(priority_queue<int>*, int, int, bool);

int main() {
    int num_TC, i, type, num;
    bool stack_possible = true, queue_possible = true, pqueue_possible = true;
    stack<int> mystack;
    queue<int> myqueue;
    priority_queue<int> mypqueue;
    
    while(cin >> num_TC) {
        for(i=0;i<num_TC;i++) {
            scanf("%d %d", &type, &num);
            stack_possible = check_stack(&mystack, type, num, stack_possible);
            queue_possible = check_queue(&myqueue, type, num, queue_possible);
            pqueue_possible = check_pqueue(&mypqueue, type, num, pqueue_possible);
        }
        if(stack_possible && !queue_possible && !pqueue_possible) {
            cout << "stack" << endl;
        }
        else if(!stack_possible && queue_possible && !pqueue_possible) {
            cout << "queue" << endl;
        }
        else if(!stack_possible && !queue_possible && pqueue_possible) {
            cout << "priority queue" << endl;
        }
        else if(!stack_possible && queue_possible && pqueue_possible) {
            cout << "not sure" << endl;
        }
        else if(stack_possible && !queue_possible && pqueue_possible) {
            cout << "not sure" << endl;
        }
        else if(stack_possible && queue_possible && !pqueue_possible) {
            cout << "not sure" << endl;
        }
        else if(stack_possible && queue_possible && pqueue_possible) {
            cout << "not sure" << endl;
        }
        else {
            cout << "impossible" << endl;
        }
        
        // Clear the stack and queue to use for the next test case.
        while(!mystack.empty()) {
            mystack.pop();
        }
        while(!myqueue.empty()) {
            myqueue.pop();
        }
        while(!mypqueue.empty()) {
            mypqueue.pop();
        }
        stack_possible = true;
        queue_possible = true;
        pqueue_possible = true;
    }
    
    return 0;
}

void print_stack(stack<int> mystack) {
    while(mystack.size() != 0) {
        cout << mystack.top() << " ";
        mystack.pop();
    }
}

bool check_stack(stack<int> *mystack, int type, int num, bool possible) {
    bool stack_empty;
    // Check if stack is empty or not.
    if(mystack->empty()) {
        stack_empty = true;
    }
    else {
        stack_empty = false;
    }
    // Not possible to pop from an empty stack
    if(stack_empty == true && type == 2) {
        possible = false;
    }
    if(possible) {
        if(type == 1) {
            mystack->push(num);
        }
        if(type == 2) {
            if(mystack->top() == num) {
                mystack->pop();
            }
            else {
                possible = false;
            }
        }
        
        /*// Debugging
                cout << "Your stack contains these elements: ";
                print_stack(mystack);
                cout << endl; */
    }
    if(possible) {
        return true;
    }
    else {
        return false;
    }
    return true;
}

bool check_queue(queue<int> *myqueue, int type, int num, bool possible) {
    bool queue_empty;
    // Check if queue is empty...
    if(myqueue->empty()) {
        queue_empty = true;
    }
    else {
        queue_empty = false;
    }
    // If queue is empty, it is impossible to pop from it
    if(queue_empty == true && type == 2) {
        possible = false;
    }
    
    if(possible) {
        if(type == 1) {
            myqueue->push(num);
        }
        if(type == 2) {
            if(myqueue->front() == num) {
                myqueue->pop();
            }
            else {
                possible = false;
            }
        }
    }
    if(possible) {
        return true;
    }
    else {
        return false;
    }
    return true;
}

bool check_pqueue(priority_queue<int> *mypqueue, int type, int num, bool possible) {
    bool pqueue_empty;
    // Check if queue is empty
        if(mypqueue->empty()) {
        pqueue_empty = true;
    }
    else {
        pqueue_empty = false;
    }
    // If queue is empty, it is impossible to pop from it
    if(pqueue_empty == true && type == 2) {
        possible = false;
    }
    
    if(possible) {
        if(type == 1) {
            mypqueue->push(num);
        }
        if(type == 2) {
            if(mypqueue->top() == num) {
                mypqueue->pop();
            }
            else {
                possible = false;
            }
        }
    }
    if(possible) {
        return true;
    }
    else {
        return false;
    }
    return true;
}