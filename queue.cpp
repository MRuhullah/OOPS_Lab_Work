#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Queue
{
private:
    T *arr;
    int capacity;
    int front;
    int rear;

public:
    Queue(int size)
    {
        capacity = size;
        arr = new T[capacity];
        front = 0;
        rear = -1;
    }

    ~Queue()
    {
        delete[] arr;
    }

    bool isEmpty()
    {
        return front > rear;
    }

    bool isFull()
    {
        return rear == capacity - 1;
    }

    void enqueue(T value)
    {
        if (isFull())
        {
            throw overflow_error("QUEUE OVERFLOW");
        }
        arr[++rear] = value;
    }

    T dequeue()
    {
        if (isEmpty())
        {
            throw underflow_error("QUEUE UNDERFLOW");
        }
        return arr[front++];
    }

    T getFront()
    {
        if (isEmpty())
        {
            throw underflow_error("QUEUE IS EMPTY");
        }
        return arr[front];
    }
};

int main()
{
    try
    {

        Queue<float> floatQueue(5);
        floatQueue.enqueue(1.1f);
        floatQueue.enqueue(2.2f);
        floatQueue.enqueue(3.3f);

        cout << "Float Queue Front: " << floatQueue.getFront() << endl;
        cout << "Dequeued: " << floatQueue.dequeue() << endl;

        cout << endl;

        Queue<char> charQueue(5);
        charQueue.enqueue('A');
        charQueue.enqueue('B');
        charQueue.enqueue('C');

        cout << "Char Queue Front: " << charQueue.getFront() << endl;
        cout << "Dequeued: " << charQueue.dequeue() << endl;
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
