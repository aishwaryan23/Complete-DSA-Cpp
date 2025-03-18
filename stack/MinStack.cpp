#include <iostream>
#include <stack>
#include<limits.h>
using namespace std;

class MinStack {
private:
    stack<long long int> s;
    long long int minval;

public:
    MinStack() {
        minval = INT_MAX;
    }

    void push(int val) {
        if (s.empty()) {
            s.push(val);
            minval = val;
        } else {
            if (val < minval) {
                s.push(2 * val - minval);
                minval = val;
            } else {
                s.push(val);
            }
        }
    }

    void pop() {
        if (s.empty()) return;

        if (s.top() < minval) {
            minval = 2 * minval - s.top();
        }
        s.pop();
    }

    int top() {
        if (s.empty()) return -1;  // Handle empty stack case
        if (s.top() < minval) {
            return minval;
        }
        return s.top();
    }

    int getMin() {
        return s.empty() ? -1 : minval;  // Handle empty stack case
    }
};

int main() {
    MinStack s;

    s.push(-2);
    s.push(0);
    s.push(-3);
    cout << "Min: " << s.getMin() << endl; // Output: -3

    s.pop();
    cout << "Top: " << s.top() << endl;   // Output: 0
    cout << "Min: " << s.getMin() << endl; // Output: -2

    return 0;
}
