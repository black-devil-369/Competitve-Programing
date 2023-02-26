#include<iostream>
using namespace std;
// creating a first namespace 
// using namespace keyword
namespace calculation{
    // only delcalare method here
    void message();
    // only declare class here;
    class Students;
}
// defining method outside of namespace
void calculation::message(){
    char a = 'a';
    cout<<a<<endl;
}
// defining class outside of namespace
class calculation::Students{
    private:
    int age;
    double marks;
    public:
    Students(int a,double m){
        this->age = a;
        this->marks = m;
    }
    void message(){
        cout<<"The age is  "<<age<<endl;
        cout<<"The marks obtained  "<<marks<<endl;
    }
};
int main(){
    calculation::Students s1(20,15.2);
    s1.message();
}
