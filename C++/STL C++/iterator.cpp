#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main(){
    vector<int>v1 = {3,5,2,6,7,4};
    // declare iterator for vector
    vector<int>::iterator ptr;
    for(ptr=v1.begin();ptr!=v1.end();++ptr){
        cout<<*ptr<<" ";
    }
    cout<<endl;
    vector<int>::iterator ptr2 = v1.begin();
    vector<int>::iterator ptr3 = v1.end();
    auto  a =next(ptr2,3);
    auto  b = prev(ptr3,3);
    cout<<*ptr2<<endl;
    cout<<*a<<" "<<*b<<endl;
    cout<<endl;
    return 0;
}