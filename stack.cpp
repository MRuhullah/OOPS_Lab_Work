#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

template <typename T>
class Stack
{
private:
    T *arr;
    int capacity;
    int top;

public:
    // Constructor
    Stack(int size)
    {
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }

    // Destructor
    ~Stack()
    {
        delete[] arr;
    }

    bool isempty()
    {
        return top == -1;
    }

    bool isfull()
    {
        return top == capacity - 1;
    }

    void push(T value)
    {
        if (isfull())
        {
            throw overflow_error("STACK IS FULL");
        }
        arr[++top] = value;
    }

    T pop()
    {
        if (isempty())
        {
            throw underflow_error("STACK IS EMPTY");
        }
        return arr[top--];
    }

    T peek()
    {
        if (isempty())
        {
            throw underflow_error("STACK IS EMPTY");
        }
        return arr[top];
    }
};

int main()
{
    try
    {
        Stack<int> intStack(5);
        intStack.push(10);
        intStack.push(20);
        intStack.push(30);

        cout << "Integer Stack Peek: " << intStack.peek() << endl;
        cout << "Popped: " << intStack.pop() << endl;

        Stack<string> stringStack(3);
        stringStack.push("Ali");
        stringStack.push("Ahmed");

        cout << "String Stack Peek: " << stringStack.peek() << endl;
        cout << "Popped: " << stringStack.pop() << endl;
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
