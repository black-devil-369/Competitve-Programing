#include<iostream>
using namespace std;
// creating a first name space
namespace first_namespace{
    void fun(){
        cout<<"first_namespace"<<endl;
    }
}
namespace second_nameapce{
    void fun(){
        cout<<"Second_namespace"<<endl;
    }
}
using namespace second_nameapce;
int main(){
    fun();
    return 0;
}