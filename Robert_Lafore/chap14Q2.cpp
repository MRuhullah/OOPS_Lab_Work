/*A queue is a data-storage device. It’s like a stack, except that, instead of being last-infirst-out, it’s first-in-first-out, like the line at a bank teller’s window. If you put in 1, 2, 3,
you get back 1, 2, 3 in that order.
A stack needs only one index to an array (top in the STAKARAY program in Chapter 7). A
queue, on the other hand, must keep track of two indexes to an array: one to the tail,
where new items are added, and one to the head, where old items are removed. The tail
follows the head through the array as items are added and removed. If either the tail or
the head reaches the end of the array, it is reset to the beginning.
Write a class template for a queue class. Assume that the programmer using the queue
won’t make any mistakes, like exceeding the capacity of the queue or trying to remove
an item when the queue is empty. Define several queues of different data types and insert
and remove data from them.*/

#include <iostream>
using namespace std;

template <class T>
class Queue
{
private:
    T *arr;
    int size;
    int head;
    int tail;

public:
    Queue(int s) : size(s), head(0), tail(0)
    {
        arr = new T[size];
    }

    void insert(T value)
    {
        arr[tail] = value;
        tail = (tail + 1) % size;
    }

    T remove()
    {
        T value = arr[head];
        head = (head + 1) % size;
        return value;
    }
};

int main()
{
    Queue<int> q1(5);
    Queue<double> q2(5);
    Queue<char> q3(5);

    q1.insert(1);
    q1.insert(2);
    q1.insert(3);

    q2.insert(1.1);
    q2.insert(2.2);
    q2.insert(3.3);

    q3.insert('A');
    q3.insert('B');
    q3.insert('C');

    cout << "Int Queue: ";
    cout << q1.remove() << " ";
    cout << q1.remove() << " ";
    cout << q1.remove() << endl;

    cout << "Double Queue: ";
    cout << q2.remove() << " ";
    cout << q2.remove() << " ";
    cout << q2.remove() << endl;

    cout << "Char Queue: ";
    cout << q3.remove() << " ";
    cout << q3.remove() << " ";
    cout << q3.remove() << endl;

    return 0;
}
