#include<iostream>
using namespace std;
class DynamicArray{
    private:
    int capacity;
    int lastindex;
    int *ptr;
    public:
    DynamicArray(int);
};
// code for constructor of DynamicArray class
DynamicArray::DynamicArray(int cap){
    capacity = cap;
    lastindex =-1;
    ptr = new int[capacity];
}