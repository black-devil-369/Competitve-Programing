#include<iostream>
using namespace std;
// ceating a nested namespace 
namespace outer_namespace{
    void loop(){
        cout<<"Jai Maa Bhavani";
    }
    namespace inner_namespace{
        void loop(){
            cout<<"Jai Maa Kali";
        }
    }
}
// using declare namespace for output
// the member of nested namespace access by the resolution  scope(::)
using namespace outer_namespace::inner_namespace;
int main(){
    loop();
    return 0;
}