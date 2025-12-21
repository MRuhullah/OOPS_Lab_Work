/* Add exceptions to the queue template in Exercise 2. Throw two exceptions: one if the
capacity of the queue is exceeded, the other if the program tries to remove an item from
an empty queue. One way to handle this is to add a new data member to the queue: a
count of the number of items currently in the queue. Increment the count when you
insert an item, and decrement it when you remove an item. Throw an exception if this
count exceeds the capacity of the queue, or if it becomes less than 0.
You might try making the main() part of this exercise interactive, so the user can put values on a queue and take them off. This makes it easier to exercise the queue. Following
an exception, the program should allow the user to recover from a mistake without corrupting the contents of the queue.*/

#include <iostream>
#include <stdexcept>

using namespace std;
template <typename T>
class Queue
{
private:
    T *arr;
    int size;
    int head;
    int tail;
    int count;

public:
    Queue(int s) : size(s), head(0), tail(0), count(0)
    {
        arr = new T[size];
    }
    void insert(T value)
    {
        if (count == size)
            throw runtime_error("Queue overflow.....");

        arr[tail] = value;
        tail = (tail + 1) % size;
        count++;
    }

    T remove()
    {
        if (count == 0)
            throw runtime_error("Queue Underflow: Queue is empty");

        T value = arr[head];
        head = (head + 1) % size;
        count--;
        return value;
    }
};

int main()
{
    Queue<int> q(2);
    int value;

    try
    {
        cout << "Enter first value: ";
        cin >> value;
        q.insert(value);

        cout << "Enter second value: ";
        cin >> value;
        q.insert(value);

        cout << "Enter third value: ";
        cin >> value;
        q.insert(value);
    }
    catch (exception &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    try
    {
        cout << "Removed: " << q.remove() << endl;
        cout << "Removed: " << q.remove() << endl;
        cout << "Removed: " << q.remove() << endl;
    }
    catch (exception &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
