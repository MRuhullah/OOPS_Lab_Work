#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Queue
{
private:
    T *arr;
    int capacity;
    int frontIndex;
    int rearIndex;
    int count;

public:
    Queue(int size)
    {
        capacity = size;
        arr = new T[capacity];
        frontIndex = 0;
        rearIndex = -1;
        count = 0;
    }

    ~Queue()
    {
        delete[] arr;
    }

    bool isEmpty()
    {
        return count == 0;
    }

    bool isFull()
    {
        return count == capacity;
    }

    void enqueue(T value)
    {
        if (isFull())
        {
            throw overflow_error("QUEUE OVERFLOW");
        }
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = value;
        count++;
    }

    T dequeue()
    {
        if (isEmpty())
        {
            throw underflow_error("QUEUE UNDERFLOW");
        }
        T value = arr[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        count--;
        return value;
    }

    T front()
    {
        if (isEmpty())
        {
            throw underflow_error("QUEUE IS EMPTY");
        }
        return arr[frontIndex];
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

        cout << "Float Queue Front: " << floatQueue.front() << endl;
        cout << "Float Queue Dequeued: " << floatQueue.dequeue() << endl;

        cout << endl;

        Queue<char> charQueue(5);
        charQueue.enqueue('A');
        charQueue.enqueue('B');
        charQueue.enqueue('C');

        cout << "Char Queue Front: " << charQueue.front() << endl;
        cout << "Char Queue Dequeued: " << charQueue.dequeue() << endl;
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
