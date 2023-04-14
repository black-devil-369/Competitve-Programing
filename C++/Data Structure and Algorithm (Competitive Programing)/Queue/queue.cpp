#include<iostream>
using namespace std;
class Queue{
    private:
    int capacity;
    int rear,front;
    int *ptr;
    public:
    Queue(int);
    void append(int);
    bool isEmpty();
    bool isFull();
    void deletion();
};
void Queue::deletion(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    front++;
}
bool Queue::isFull(){
    return rear==front==capacity-1;
}
bool Queue::isEmpty(){
    return rear==-1;
}
Queue::Queue(int cap){
    capacity=cap;
    rear=-1;
    front=-1;
    ptr = new int[capacity];
}
void Queue::append(int data){
    if(isFull()){
        cout<<"Queue is Full"<<endl;
    }
    rear++;
    ptr[rear]=data;
}
// Deriver Program
int main(){
    Queue q(4);
    q.append(25);
    q.deletion();
    return 0;
}