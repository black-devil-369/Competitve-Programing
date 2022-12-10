#include <bits/stdc++.h>
using namespace std;
/*
 */
class Queue
{
private:
    int capacity;
    int front, rear;
    int *ptr;

public:
    Queue(int);
    Queue(Queue &); // copy constructor
                    // int isFull();
    bool isFull();
    void insert(int);
    bool isEmpty();
    int getRear(); // for deletion of queue or dequeue
    int getFront();
    void del();
    ~Queue();
    int count();
    Queue &opearator = (Queue &);
};
Queue& Queue::opearator = (Queue& Q){


}
int Queue::count()
{
    if (isEmpty())
    {
        return 0;
    }
    if (front <= rear)
    {
        return rear - front + 1;
    }
    else
    {
        return capacity - front + rear + 1;
    }
}
Queue::Queue(Queue &Q)
{
    capacity = Q.capacity;
    front = Q.front;
    rear = Q.rear;
    if (ptr != NULL)
    {
        delete[] ptr;
    }
    ptr = new int[capacity];
    int n = Q.count();
    int i = Q.front;
    while (n)1
    {
        /* code */
        ptr[i] = Q.ptr[i];
        if (i == capacity - 1)
        {
            i = 0;
        }
        else
        {
            i++;
        }
        n--;
    }
}
Queue::~Queue()
{
    delete[] ptr;
}
void Queue::del()
{
    if (isEmpty())
    {
        cout << "\nQueue is Underflow";
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == capacity - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}
// this give front element of queue
int Queue::getFront()
{
    if (!isEmpty())
    {
        return ptr[front];
    }
    cout << "Queue is empty" << endl;
    return -1;
}
int Queue::getRear()
{
    if (!isEmpty())
    {
        return ptr[rear];
    }
    cout << "Queue is Empty" << endl;
    return -1;
}
// for checking queue is empty or not
bool Queue::isEmpty()
{
    return rear == -1;
}
bool Queue::isFull()
{
    return front == 0 && rear == capacity - 1 || rear + 1 = front;
}
// insert a value in queue by checking the queue empty or full;
void Queue::insert(int data)
{
    if (isFull())
    {
        cout << "\n Queue is FuLL";
    }
    else if (isEmpty())
    {
        front = rear = 0;
        ptr[rear] = data;
    }
    else if (rear = capacity - 1)
    {
        rear = 0;
        ptr[rear] = data;
    }
    else
    {
        rear++;
        ptr[rear] = data;
    }
}