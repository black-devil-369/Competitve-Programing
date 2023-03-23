#include<iostream>
class Arrays{
    private:
    int capacity;
    int lastindex;
    int *ptr;
    public:
    Arrays(int);
};
Arrays::Arrays(int cap)
{
    capacity = cap;
    lastindex=-1;
    ptr = new int[capacity];
}