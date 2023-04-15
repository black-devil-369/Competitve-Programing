#include "ass2.cpp"
#include<iostream>
using namespace std;
int main()
{
    ExtendedArray obj(15);
    obj.append(10);
    obj.append(20);
    obj.append(10);
    obj.append(13);
    obj.append(10);
    obj.append(20);
    obj.append(13);
    obj.append(40);
    obj.append(16);
    obj.append(13);
    obj.append(10);
    obj.removeDuplicate();
    obj.printArray();
    obj.swapItems(0,2);
    obj.printArray();

    
    
    cout<<endl;
    return 0;
}