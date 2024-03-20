#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Create three stacks
    stack<int> stack1, stack2, stack3;
    stack1 = stack<int>();
    stack2 = stack<int>();
    stack3 = stack<int>();

    // Push values onto the stacks
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack2.push(4);
    stack2.push(5);
    stack3.push(6);
    stack3.push(7);
    stack3.push(8);

    // Display the contents of the stacks
    cout << "Before popping:" << endl;
    cout << "Stack 1 (capacity: 5, size: " << stack1.size() << "): ";
    while (!stack1.empty()) {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    cout << endl;
    cout << "Stack 2 (capacity: 10, size: " << stack2.size() << "): ";
    while (!stack2.empty()) {
        cout << stack2.top() << " ";
        stack2.pop();
    }
    cout << endl;
    cout << "Stack 3 (capacity: 12, size: " << stack3.size() << "): ";
    while (!stack3.empty()) {
        cout << stack3.top() << " ";
        stack3.pop();
    }
    cout << endl;

    // Push more values onto the stacks
    stack1.push(9);
    stack1.push(10);
    stack2.push(11);
    stack2.push(12);
    stack3.push(13);
    stack3.push(14);

    // Display the contents of the stacks
    cout << "After pushing more values:" << endl;
    cout << "Stack 1 (capacity: 5, size: " << stack1.size() << "): ";
    while (!stack1.empty()) {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    cout << endl;
    cout << "Stack 2 (capacity: 10, size: " << stack2.size() << "): ";
    while (!stack2.empty()) {
        cout << stack2.top() << " ";
        stack2.pop();
    }
    cout << endl;
    cout << "Stack 3 (capacity: 12, size: " << stack3.size() << "): ";
    while (!stack3.empty()) {
        cout << stack3.top() << " ";
        stack3.pop();
    }
    cout << endl;

    return 0;
}
