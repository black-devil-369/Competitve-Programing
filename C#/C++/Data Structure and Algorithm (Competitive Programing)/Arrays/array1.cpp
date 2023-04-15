#include<iostream>
using namespace std;
class Array{
    private:
    int capacity;
    int lastindex;
    int *ptr;
    public:
    // Constructor of class
    Array(int);
    bool isEmpty();
    void append(int);
    void insert(int,int);
    void edit(int,int);
    void del(int);
    bool isFull();
    int get(int);
    int count();
    int find(int);
    ~Array();
};
// Array Constructor
Array::Array(int cap){
    capacity = cap;
    lastindex=-1;
    ptr = new int[capacity];

}
bool Array::isEmpty(){
    return lastindex == -1;
}
// code for add data inside a arrays
void Array::append(int data){
    if(lastindex == capacity-1){
        cout<<endl<<"Arrays is already full";
    }
    else{
        lastindex++;
        ptr[lastindex]=data;
    }
}
// Insert a  element at a specfic location inside a array
void Array::insert(int index,int data){
    int i;
    // this condition is used to check array is full
    if(lastindex == capacity-1){
        cout<<endl<<"Arrays is already full";
    }
    // this condition is used to check
    // if index is less than index of array or if index is greater that index of array
    else if(index<0 || index>lastindex+1){
        cout<<endl<<"Invaild index";
    }
    // this condition is used to insert a data at a specfic index if 
    // condition is satified
    else{
        for(i = lastindex; i>=index; i--){
            ptr[i+1] = ptr[i];
        }
        ptr[index]=data;
    }
}
// this condition is used to edit an element at specfic index
void Array::edit(int index,int data){
    if(index>0 && index<=lastindex){
        ptr[index]=data;
    }
}
// this condition us used  to delete an element at sepecfic index;
void Array::del(int index){
    int i;
    // call isempty() function
    if(lastindex==-1){
        cout<<endl<<"Array is empty";
    }
    else if(index<0 || index>lastindex){
        cout<<endl<<"Invaild index";
    }
    else{
        for(i = index; i<lastindex; i++){
            ptr[i] = ptr[i+1];
        }
        lastindex--;
    }
}
// this condition is used to check an array is full
bool Array::isFull(){
    return lastindex == capacity-1;
}
// this condition is used to get a element of array at specfic index
int Array::get(int index){
    if(index>=0 && index<=lastindex){
        return ptr[index];
    }
    cout<<endl<<"Invalid Index or empty array";
    return -1;
}
// this condition give total number of element inside a array;
int Array::count(){
    return lastindex+1;
}
int Array::find(int data){
    int i;
    for(i =0;i<lastindex;i++){
        if(ptr[i]==data){
            return i;
        }
    }
    return -1;
}
Array::~Array(){
    delete[]ptr;
}
int main(){
    Array obj(5);
    if(obj.isEmpty()){
        cout<<endl<<"Empty Arrays";
    }
    cout<<endl;
    cout<<"Add an element inside a arrays"<<endl;
    obj.append(16);
    obj.append(35);
    obj.append(56);
    for(int i =0;i<obj.count();i++){
        cout<<obj.get(i)<<" ";
    }
    cout<<endl;
    return 0;
}