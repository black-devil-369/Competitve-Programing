#include<iostream>
using namespace std;
template<class X>
class Array
{
    private:
        int capacity;
        int lastIndex;
        X *ptr;
    public:
        Array(int);
        bool isEmpty();
        void append(X);
        void insert(int,X);
        void edit(int,X);
        void del(int);
        bool isFull();
        X get(int);
        int count();
        int find(X);
        void printarrays();
        ~Array();

};
template<class X>int Array<X>::find(X data)
{
    int i;
    for(i=0;i<=lastIndex;i++)
        if(ptr[i]==data)
            return i;
    return -1;
}
template<class X>Array<X>::~Array()
{
    delete[]ptr;
}
template<class X>int Array<X>::count()
{
    return lastIndex+1;
}
template<class X>X Array<X>::get(int index)
{
    if(index>=0 && index<=lastIndex)
        return ptr[index];
    cout<<endl<<"Invalid index or empty array";
    return -1;
}
template<class X>bool Array<X>::isFull()
{
    return lastIndex==capacity-1;
}
template<class X>void Array<X>::del(int index)
{
    int i;
    if(isEmpty())
        cout<<endl<<"Array is empty";
    else if(index<0 || index>lastIndex)
        cout<<endl<<"Invalid Index";
    else
    {
        for(i=index;i<lastIndex;i++)
            ptr[i]=ptr[i+1];
        lastIndex--;
    }
    
}
template<class X>void Array<X>::edit(int index,X data)
{
    if(index>=0&&index<=lastIndex)
        ptr[index]=data;
}
template<class X>void Array<X>::insert(int index,X data)
{
    int i;
    if(lastIndex==capacity-1)
        cout<<endl<<"Array is already full";
    else if(index<0 || index>lastIndex+1)
    {
        cout<<"Invalid Index";
    }
    else
    {
        for(i=lastIndex;i>=index;i--)
            ptr[i+1]=ptr[i];
        ptr[index]=data;
        lastIndex++;
    }
}
template<class X>void Array<X>::append(X data)
{
    if(lastIndex==capacity-1)
        cout<<endl<<"Array is already full";
    else
    {
        lastIndex++;
        ptr[lastIndex]=data;
    }
}
template<class X>bool Array<X>::isEmpty()
{
    return lastIndex==-1;
}
template<class X>Array<X>::Array(int cap)
{
    capacity=cap;
    lastIndex=-1;
    ptr=new X[capacity];

}
template<class X>void Array<X>::printarrays(){
    for(int i=0;i<count();++i){
        cout<<get(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    Array<int> obj(5);
    if(obj.isEmpty())
        cout<<"Empty Array";
    cout<<endl;
    obj.append(20);
    obj.append(40);
    obj.append(60);
    obj.insert(1,30);
    obj.count();
    obj.printarrays();
   /* for(int i=0;i<obj.count();i++)
        cout<<obj.get(i)<<" ";
    obj.del(2);
    cout<<endl;
    for(int i=0;i<obj.count();i++)
        cout<<obj.get(i)<<" ";
    */
    cout<<endl;
    Array<double>o(5);
    o.append(2.6);
    o.append(46.2);
    o.append(34.2);
    o.printarrays();
    cout<<endl;
    return 0;
}